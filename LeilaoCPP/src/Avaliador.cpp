//
// Created by Eduardo Alexandre on 15/01/22.
//

#include "Avaliador.h"

void Avaliador::avalia(Leilao leilao){
    std::vector<Lance> lances = leilao.recuperaLances();
    for( Lance lance : lances){
        if(lance.recuperaValor() > maiorValor){
            maiorValor = lance.recuperaValor();
        }
    }
}
float Avaliador::recuperaMaiorValor() const{
    return maiorValor;
}