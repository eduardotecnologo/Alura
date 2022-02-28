#include <iostream>
#include <vector>

extern std::vector<char> chuteerror;

void imprime_error(){
    std::cout << "Chutes errados: ";
    for(char letra : chuteerror){
        std::cout << letra << " ";
    }
    std::cout << std::endl;
}