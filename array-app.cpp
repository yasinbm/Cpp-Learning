#include <iostream>

int main(){
    
    int numbers[5];

    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;
    

    for (int i = 0; i < 5; i++){
        std::cout<< numbers[i] << " ";
    }
    return 0;

}