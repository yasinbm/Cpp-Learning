#include <iostream>

int main(){
    int number = 1000;
    int division_time = 0;

    for (int i = 1; i < number; i++){
        if (i == 1){
            std::cout << i << "\n";
        }
        else {
            for (int j = 1; j <= i; j++){
                if (i % j == 0){
                    division_time += 1;
                }
            }
            if (division_time < 3){
                std::cout << i << "\n";
            }
            division_time = 0;
        }
    }
}