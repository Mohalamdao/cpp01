#include <iostream>
#include <string>
#include <fstream>
#include <cstring>

std::string replaceFonction(std::string line, char* s1, const std::string& s2,int i)
{
    std::string test = line.substr(0,i) +s2 + line.substr(i + strlen(s1));

    return(test);
}

std::string replace_test(std::string line, char* s1, const std::string& s2)
{
    while(line.find(s1) != std::string::npos)
    {
        int i = line.find(s1);
        line =  replaceFonction(line,s1,s2,i);  
    }
    return(line); 
}
int main(int ac, char **av)
{
    std::string test;
    if(ac != 4)
        std::cout << "the number of arguments is wrong" << std::endl;
    std::ifstream fileName(av[1]);
    if(!fileName.is_open())
        std::cout << "erreur d'ouverture du fichier " << std::endl ;
    std::ofstream newFile(std::string(av[1]) + ".replace");
    if (!newFile) 
    {
        std::cerr << "Erreur lors de l'ouverture du fichier en écriture." << std::endl;
        return 1;
    }
    else
        while (std::getline(fileName,test))
                newFile << replace_test(test,av[2],av[3]) << std::endl;
    newFile.close();
    fileName.close();
}