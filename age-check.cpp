#include <iostream>

int main(){
    int age;
    std::cout << "Please enter your age: \n";
    std::cin >> age;

    if (age >= 18){
        std::cout << "You are an adult! \n";
    } else {
        std::cout << "You are underage! \n";
    }
    return 0;

}