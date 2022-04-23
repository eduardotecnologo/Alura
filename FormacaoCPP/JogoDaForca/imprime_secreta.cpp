#include <iostream>
#include <string>
#include <map>

extern std::string palavrasecreta;
extern std::map<char, bool> chutou;

void imprime_secreta(){
    for(char letra : palavrasecreta){
        if(chutou[letra]){
            std::cout << letra << " ";
        }else{
            std::cout << "_ ";
        }
    }
    std::cout << std::endl;
}