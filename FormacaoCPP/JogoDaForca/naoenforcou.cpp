#include <string>
#include <vector>

extern std::vector<char> chuteerror;

bool naoenforcou(){
    return chuteerror.size() < 5;
}