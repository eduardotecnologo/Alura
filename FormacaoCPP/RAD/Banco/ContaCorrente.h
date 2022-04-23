#pragma once
#include "Conta.h"

class ContaCorrente final:public Conta{
	public:
		ContaCorrente(std::string numero, Titular titular);
		float taxaDeSaque() const override;
        void transferePara(Conta& conta, float valor);
};
