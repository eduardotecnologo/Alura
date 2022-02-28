#include "ContaCorrente.h"
#include <iostream>

ContaCorrente::ContaCorrente(std::string numero, Titular titular): Conta(numero, titular){

}

float ContaCorrente::taxaDeSaque() const{
	std::cout << "Chamando método Sacar de conta corrente" << std::endl;
    return 0.05;
}

void ContaCOrrente::transferePara(Conta& destino, float valor){
	sacar(valor);
    destino.depositar(valor);
}
