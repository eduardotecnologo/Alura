//
// Created by Eduardo Alexandre on 15/01/22.
//

#ifndef LEILAOLION_LEILAO_H
#define LEILAOLION_LEILAO_H
#include <vector>
#include <string>
#include "Lance.h"
class Leilao {
        private:
            std::vector<Lance> lances;
            std::string descricao;
        public:
            Leilao(std::string descricao);
            const std::vector<Lance>& recuperaLances() const;
        void recebeLance(const Lance& lance);
};

#endif //LEILAOLION_LEILAO_H
