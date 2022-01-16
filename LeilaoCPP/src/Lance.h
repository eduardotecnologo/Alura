//
// Created by Eduardo Alexandre on 15/01/22.
//

#ifndef LEILAOLION_LANCE_H
#define LEILAOLION_LANCE_H
#include "Usuario.h"

class Lance {
        private:
            Usuario usuario;
            float valor;
        public:
            Lance(Usuario usuario, float valor);
            float recuperaValor() const;
};
#endif //LEILAOLION_LANCE_H
