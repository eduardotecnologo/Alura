#pragma once
#include <string>
#include "Pessoa.h"
#include "Cpf.h"

class Titular:public Pessoa{
	public:
        Titular(Cpf cpf, std::string nome);
};
