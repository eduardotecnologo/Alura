//
// Created by Eduardo Alexandre on 15/01/22.
//

#include "leilao.h"

Leilao::Leilao(std::string descricao): descricao(descricao){

}
const std::vector<Lance>& Leilao::getLances() const{
    return lances;
}

void Leilao::recebeLance(const Lance& lance){
    lances.push_back(lance);
}