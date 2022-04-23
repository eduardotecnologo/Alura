//
// Created by Eduardo Alexandre on 15/01/22.
//

#include "Usuario.h"
#include <string>

class Usuario{
private:
    std::string nome;
public:
    Usuario(std::string);
    std::string getNome() const;
};
