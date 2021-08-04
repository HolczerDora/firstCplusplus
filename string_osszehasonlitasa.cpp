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
    //game with variables
    int sum_of_the_two_number = 10+10; 
    std::cout << sum_of_the_two_number <<std::endl;

    std::string my_name = "Dorka";
    std::cout << "My name is: "<< my_name << std::endl;
  
    int ultimate_answer =1890/90*2;
    std::cout << "The answer to life, \nthe universe, \nand everything: " << ultimate_answer << std::endl;

    //tanulmanyi atlag szamitasa
    int student_count=7;
    int sum_of_grades=5+5+3+5+4+2+2;
    int mean_of_grades=sum_of_grades/student_count;
    std::cout << "The class mean of grades: " << mean_of_grades << std::endl; 
    //variable rename
    int age=43;
    std::cout <<"My age is : "<< age+5 <<std::endl;
}