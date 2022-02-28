#include <string>
#include <map>

extern std::string palavrasecreta;
extern std::map<char, bool> chutou;

bool naoacertou(){
    for(char letra : palavrasecreta){
        if(!chutou[letra]){
            return true;
        }
    }
    return false;
}