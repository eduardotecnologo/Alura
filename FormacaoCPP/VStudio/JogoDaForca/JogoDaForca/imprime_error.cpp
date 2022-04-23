#include <iostream>
#include "imprime_error.h"


void Forca::imprime_error(const std::vector<char>& chuteerror) {
    std::cout << "Chutes errados: ";
    for (char letra : chuteerror) {
        std::cout << letra << " ";
    }
    std::cout << std::endl;
}
