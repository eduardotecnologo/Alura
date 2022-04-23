#include <vector>
#include "ler_arquivo.h"

//extern std::string palavrasecreta;
//extern std::vector<char> chuteerror;

std::string sorteio() {
    std::vector<std::string> palavras = ler_arquivo();

    srand(time(NULL));

    int indice_sorteado = rand() % palavras.size();
    return palavras[indice_sorteado];
}