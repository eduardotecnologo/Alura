#pragma once
#include "Pessoa.h"
#include "Cpf.h"
#include <string>

class Funcionario:public Pessoa{
	private:
		float salario;

	public:
		Funcionario(Cpf cpf, std::string nome, float salario);
		std::string getNome()const;
        float getSalario()const;
		virtual float bonificacao() const = 0;
};
