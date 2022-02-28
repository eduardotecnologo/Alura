#pragma once
#include "Cpf.h"
#include <string>

class Pessoa{
	protected:
		Cpf cpf;
		std::string nome;
	public:
		Pessoa(Cpf cpf, std::string nome);
    private:
		void verificaTamanhoNome();
};
