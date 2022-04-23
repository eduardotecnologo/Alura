#include <vector>
#include <string>
#include <ctime>
#include "ler_arquivo.hpp"

extern std::string palavrasecreta;

void sorteio(){
    std::vector<std::string> palavras = ler_arquivo();
    
    srand(time(NULL));
    
    int indice_sorteado = rand() % palavras.size();
    palavrasecreta = palavras[indice_sorteado];
}