#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include "letra_existe.hpp"
#include "imprime_cabecario.hpp"
#include "ler_arquivo.hpp"
#include "sorteio.hpp"
#include "naoenforcou.hpp"
#include "imprime_error.hpp"
#include "imprime_secreta.hpp"
#include "chuta.hpp"
#include "adiciona_palavra.hpp"
#include "naoacertou.hpp"

using namespace std;

string palavrasecreta;
map<char, bool> chutou;
vector<char> chuteerror;

int main(){
    imprime_cabecario();
    ler_arquivo();
    sorteio();

    while(naoacertou() && naoenforcou()){
        imprime_error();
        imprime_secreta();
        chuta();
            
        cout << "Fim deJogo! " << endl;
        cout << "A palavra secreta era: " << palavrasecreta << endl;
    if(naoacertou()){
        cout << "Você perdeu! Tente novamente!" << endl;
    }else{
        cout << "Parabéns! Você acertou a palavra secreta!" << endl;
        cout << "Você deseja adicionar um nova palavra ao banco? (S/N)" << endl;
        char resposta;
        cin >> resposta;
        if(resposta == 'S'){
            adiciona_palavra();
            }
        }
    cin.get();
    }
}