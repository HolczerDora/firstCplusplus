#include <iostream>
int main () {
    std::cout << (std::string("hello") == std::string("hello")) << std::endl;
    std::cout << (std::string("hello") == std::string("helló")) << std::endl;
    //távolság, üzemanyagár, fogyasztás
    std::cout << 600*6.5/100 << std::endl;
    //declare to variable
    int number = 129;
    std::cout << number << std::endl;
    int gas_price = 440;
    std::cout << 600*6.5/100*gas_price << std::endl;
    //empty variable
    std::string user_name;
    std::string user_address;
    std::string phone_number;
    std::cout << user_name << std::endl;
}