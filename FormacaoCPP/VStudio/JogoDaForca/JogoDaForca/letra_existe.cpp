#include <string>

extern std::string palavrasecreta;

bool letra_existe(char chute) {
    for (char letra : palavrasecreta) {
        if (chute == letra) {
            return true;
        }
    }
    return false;
}