#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    
    cout <<"*******************************************" << endl;
    cout <<"**   Bem vindo ao Jogo da Adivinhação    **" << endl;
    cout <<"**      Você tem 1000 pontos manolo      **" << endl;
    cout <<"**   Escolha o seu nível de dificuldade  **" << endl;
    cout <<"**  Fácil (F), Médio (M) ou Difícil (D)  **" << endl;
    cout <<"*******************************************" << endl; 

    // Dificuldade do Jogo
    char dificuldade;
    cin >> dificuldade;
    int numero_tentativas;

    if(dificuldade == 'F'){
        numero_tentativas = 15;
    }else if(dificuldade == 'M'){
        numero_tentativas = 10;
    }else{
        numero_tentativas = 5;
    }

    srand(time(0)); // Desde 1970
    const int NUMERICSECRET = rand() % 100;


    bool error = true;
    int tentativas = 0;
    double pontos = 1000.0;

        for (tentativas = 1; tentativas <= numero_tentativas; tentativas++){
            int chute;
            cout << "Tentativa " << tentativas << endl;
            cout << "Qual o seu chute? " << endl;
            cin >> chute;

            double pontosperdidos = abs(chute - NUMERICSECRET) / 2.0;
            pontos = pontos - pontosperdidos;

            cout << "O valor do seu chute é: " << chute << endl;
            bool acertou = chute == NUMERICSECRET;
            bool maior = chute > NUMERICSECRET;

            if(acertou){
                cout << "Parabéns! Você acertou o número secreto!" << endl;
                error = false;
                break;
            }else if(maior){
                cout << "Ops! Seu chute foi maior que o número secreto" << endl;
            }else{
                cout << "Ops! Seu chute foi menor que o número secreto" << endl;
            }
        }
    cout << "Fim de Jogo" << endl; 
    if(error){
        cout << "Você perdeu! Tente novamente!" << endl;
    }else {
        cout << "Você acertou em "<< tentativas << " tentaivas!" << endl;
        cout.precision(2);
        cout << fixed;
        cout << "Sua pontuação foi de " << pontos << " pontos!" << endl;
    }
   
}