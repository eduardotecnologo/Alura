#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <cstdlib>
#include "imprime_cabecario.h"
#include "ler_arquivo.h"
#include "sorteio.h"
#include "imprime_error.h"
#include "imprime_secreta.h"
#include "chuta.h"
#include "adiciona_palavra.h"
#include "naoacertou.h"

using namespace std;

static string palavrasecreta;
static map<char, bool> chutou; 
static vector<char> chuteerror;

int main() {
    imprime_cabecario();
    palavrasecreta = sorteio();

    while (naoacertou(palavrasecreta, chutou) && chuteerror.size() < 10) {
        Forca::imprime_error(chuteerror);
        Forca::imprime_secreta(palavrasecreta, chutou);
        chuta(chutou, chuteerror, palavrasecreta);

        cout << "Fim deJogo! " << endl;
        cout << "A palavra secreta era: " << palavrasecreta << endl;
        if (naoacertou(palavrasecreta, chutou)) {
            cout << "Você perdeu! Tente novamente!" << endl;
        }
        else {
            cout << "Parabéns! Você acertou a palavra secreta!" << endl;
            cout << "Você deseja adicionar um nova palavra ao banco? (S/N)" << endl;
            char resposta;
            cin >> resposta;
            if (resposta == 'S') {
                adiciona_palavra();
            }
        }
        cin.get();
    }
}