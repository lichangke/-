#include <iostream>

#define _GET_STRING_(string)  #string
#define GET_STRING(string)  _GET_STRING_(string)

#define _EXPANSION_(type) type##Expansion
#define EXPANSION(type) _EXPANSION_(type)


int main() {
    std::cout << "Hello, World!" << std::endl;

    std::cout << "_GET_STRING_(main) = " << _GET_STRING_(main) << std::endl;
    std::cout << "_GET_STRING_(_EXPANSION_(main)) = " << _GET_STRING_(_EXPANSION_(main)) << std::endl;
    std::cout << "_GET_STRING_(EXPANSION(main)) = " << _GET_STRING_(EXPANSION(main)) << std::endl;
    std::cout << "GET_STRING(_EXPANSION_(main)) = " << GET_STRING(_EXPANSION_(main)) << std::endl;
    std::cout << "GET_STRING(EXPANSION(main)) = " << GET_STRING(EXPANSION(main)) << std::endl;
    return 0;
}
