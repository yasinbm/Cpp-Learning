#include <iostream>

int main(){
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float sum = 0;
    float average = 0;
    for (int i = 0; i < 10; i++){
        sum = sum + numbers[i];
    }
    average = sum / 10;
    std::cout<< "Average is: "<< average << "\n";
    return 0;
}