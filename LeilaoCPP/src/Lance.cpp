//
// Created by Eduardo Alexandre on 15/01/22.
//

#include "Lance.h"

Lance::Lance(Usuario usuario, float valor):usuario(usuario), valor(valor){

}
float Lance::recuperaValor() const{
    return valor;
}