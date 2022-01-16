#include <iostream>
#include "../src/Avaliador.h"

int main(){
    // Arrange - Given
    Lance primeiroLance(Usuario("Eduardo Alexandre"), 5000);
    Lance segundoLance(Usuario("Alexandre Eduardo"), 7000);
    Leilao leilao("Macbook Pro");
    leilao.recebeLance(primeiroLance);
    leilao.recebeLance(segundoLance);

    Avaliador leiloeiro;

    // Act - When
    leiloeiro.avalia(leilao);

    // Assert - Then
    float valorEsperado = 2000;

    if(valorEsperado == leiloeiro.recuperaMaiorValor()){
        std::cout << "TESTE OK" << std::endl;
    }else{
        std::cout << "OPS!!! TESTE FALHOU" << std::endl;
        // Mostar porque falhou
    }
    return 0;
}
