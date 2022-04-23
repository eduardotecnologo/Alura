#include "ContaPoupanca.h"
#include <iostream>

ContaPoupanca::ContaPoupanca(std::string numero, Titular titular):Conta(numero, titular){
}

void ContaPoupanca::sacar(float valorASacar){
	std::cout << "Chamando método sacar da conta poupança: " << std::endl;
	if(valorASacar < 0){
        std::cout << "Ops! você não tem saldo suficiente! " << std::endl;
	}

	float tarifaDeSaque = valorASacar * 0.03;
	float valorDoSaque = valorASacar + tarifaDeSaque;

	if(valorDoSaque){
		std::cout << "Saldo insuficiente! " << std::endl;
        return;
	}
    saldo -= valorDoSaque;
}
