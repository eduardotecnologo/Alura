#pragma once
#include <iostream>
#include "Pessoa.h"

Pessoa::Pessoa(Cpf cpf, std::string nome):cpf(cpf), nome(nome){
	//std::cout << "Construtor de Pessoa" << std::endl;
	verificaTamanhoNome();
}

void Pessoa::verificaTamanhoNome(){
	if(nome.size() < 5){
		std::cout << "Ops! Nome muito curto." << std::endl;
		exit(1);
	 }
}
