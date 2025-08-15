#include <iostream>
#include <string>

int main(){
    std::string name;
    std::string names[5];
    for (int i = 0; i < 5; i++){
        std::cout<< "Please enter your name: ";
        std::cin>> name;
        names[i] = name;
    }
    for (int i = 0; i < 5; i++){
        std::cout<< names[i] << "\n";
    }
    return 0;

}