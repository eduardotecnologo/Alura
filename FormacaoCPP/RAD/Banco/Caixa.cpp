#pragma once
#include "Caixa.h"

Caixa::Caixa(Cpf cpf, std::string nome, float salario):Funcionario(cpf,nome,salario){
    return getSalario() * 0.1;
}
