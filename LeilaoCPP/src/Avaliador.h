//
// Created by Eduardo Alexandre on 15/01/22.
//

#ifndef LEILAOCPP_AVALIADOR_H
#define LEILAOCPP_AVALIADOR_H

#include "../src/leilao.h"

class Avaliador{
private:
    float maiorValor;
public:
    void avalia(Leilao);
    float recuperaMaiorValor() const;
};

#endif //LEILAOCPP_AVALIADOR_H
