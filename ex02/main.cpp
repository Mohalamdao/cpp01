#include <string>
#include <iostream>

int main()
{
    std::string string = "moha";
    std::string &stringREF = string;
    std::string *stringPTR = &string;

    std::cout << string << std::endl ; 
    std::cout << stringREF << std::endl ; 
    std::cout << *stringPTR << std::endl ;

    *stringPTR = "changement";
    std::cout << string << std::endl ; 
    std::cout << stringREF << std::endl ;
    std::cout << *stringPTR << std::endl ;

    std::cout << &string << std::endl ; 
    std::cout << &stringREF << std::endl ;
    std::cout << &stringPTR << std::endl ;

}