#include <iostream>
#include <string>


int main(){
    std::string name;
    std::cout << "Enter your name: " << std::endl;
    std::cin >> name;
    std::cout << "What is your surname?" << std::endl;
    std::string surname;
    std::cin >> surname;
    std::cout << "Hello, " << name << " " << surname << "!" << std::endl;
    return 0;
}
