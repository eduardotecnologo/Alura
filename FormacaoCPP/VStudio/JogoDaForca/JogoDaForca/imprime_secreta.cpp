#include <iostream>
#include "imprime_secreta.h"

//extern std::string palavrasecreta;
//extern std::map<char, bool> chutou;

void Forca::imprime_secreta(const std::string& palavrasecreta, const std::map<char, bool>& chutou) {
    for (char letra : palavrasecreta) {
        if (chutou.find(letra) == chutou.end() || !chutou.at(letra)) {
            std::cout << letra << " ";
        }
        else {
            std::cout << "_ ";
        }
    }
    std::cout << std::endl;
}

//(chutou.find(letra) == chutou.end() || !chutou.at(letra)) 