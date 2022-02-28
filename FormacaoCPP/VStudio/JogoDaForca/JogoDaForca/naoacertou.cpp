#include "naoacertou.h"

bool naoacertou(std::string& palavrasecreta, const std::map<char, bool>& chutou) {
    for (char letra : palavrasecreta) {
        if (chutou.find(letra) == chutou.end() || !chutou.at(letra)) {
            return true;
        }
    }
    return false;
}