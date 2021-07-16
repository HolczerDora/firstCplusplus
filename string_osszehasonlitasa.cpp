#include <iostream>
int main () {
    std::cout << (std::string("hello") == std::string("hello")) << std::endl;
    std::cout << (std::string("hello") == std::string("helló")) << std::endl;
}