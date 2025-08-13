#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>

void    putstr_fd(char *str, int fd)
{
    while (*str)
        write(fd, str++, 1);
}

int cd(char **args)
{
    if (!args[1] || args[2])
    {
        putstr_fd("error: cd: bad arguments\n", 2);
        return (1);
    }
    if (chdir(args[1]) != 0)
    {
        putstr_fd("error: cd: cannot change directory to ", 2);
        putstr_fd(args[1], 2);
        putstr_fd("\n", 2);
        return (1);
    }
    return (0);
}

int exec_cmd(char **argv, int i, char **env, int input, int has_pipe)
{
    argv[i] = NULL;

    int fd[2];
    if (has_pipe && pipe(fd) == -1)
    {
        putstr_fd("error: fatal\n", 2);
        exit(1);
    }

    pid_t pid = fork();
    if (pid < 0)
    {
        putstr_fd("error: fatal\n", 2);
        exit(1);
    }
    if (pid == 0)
    {
        if (input != 0)
        {
            dup2(input, 0);
            close(input);
        }
        if (has_pipe)
        {
            dup2(fd[1], 1);
            close(fd[0]);
            close(fd[1]);
        }
        execve(argv[0], argv, env);
        putstr_fd("error: cannot execute ", 2);
        putstr_fd(argv[0], 2);
        putstr_fd("\n", 2);
        exit(1);
    }
    waitpid(pid, NULL, 0);

    if (input != 0)
        close(input);
    if (has_pipe)
    {
        close(fd[1]);
        return fd[0];
    }
    return 0;
}

int main(int argc, char **argv, char **env)
{
    int i = 1;
    int input = 0;

    while (i < argc)
    {
        int j = i;
        while (j < argc && strcmp(argv[j], ";") != 0 && strcmp(argv[j], "|") != 0)
            j++;
        if (j > i)
        {
            if (strcmp(argv[i], "cd") == 0)
            {
                argv[j] = NULL;
                cd(&argv[i]);
            }
            else
            {
                int has_pipe = (j < argc && strcmp(argv[j], "|") == 0);
                input = exec_cmd(&argv[i], j - i, env, input, has_pipe);
            }
        }
        i = j + 1;
    }
    return 0;
}

