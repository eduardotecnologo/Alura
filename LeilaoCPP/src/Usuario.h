//
// Created by Eduardo Alexandre on 15/01/22.
//

#ifndef LEILAOLION_USUARIO_H
#define LEILAOLION_USUARIO_H

#include "Usuario.cpp"

Usuario::Usuario(std::string nome):nome(nome) {

};

std::string Usuario::getNome() const {
return nome;
}

#endif //LEILAOLION_USUARIO_H
