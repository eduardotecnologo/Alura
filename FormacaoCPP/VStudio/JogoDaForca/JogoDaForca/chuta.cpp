#include <iostream>
#include <vector>
#include <map>
#include "chuta.h"

#include "letra_existe.h"

//extern std::map<char, bool> chutou;
//extern std::vector<char> chuteerror;

void Forca::chuta(std::map<char, bool>& chutou, std::vector<char>& chuteerror) {
    std::cout << "Seu chute: ";
    char chute;
    std::cin >> chute;

    chutou[chute] = true;

    if (letra_existe(chute)) {
        std::cout << "Você acertou! " << std::endl;
    }
    else {
        std::cout << "Você errou! Seu chute não está na palavra!" << std::endl;
        //(*chuteerror).push_back(chute);
        chuteerror.push_back(chute);
    }
    std::cout << std::endl;
}
