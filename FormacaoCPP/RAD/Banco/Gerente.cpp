#pragma once
"include "Gerente.h"

Gerente::Gerente(Cpf cpf, std::string nome, float salario):Funcionario(cpf,nome,salario){

}

float Gerente::bonificacao() const{
    return getSalario() * 0.5;
};
