#include <iostream>
#include <vector>


int main(){
    int temp_factor = 1;
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int> factoriels;

    for (int i = 1; i <= size(numbers); i++){
        if (i == 1){
            factoriels.push_back(temp_factor);
        }
        else {
            for (int j = 1; j <= numbers[i - 1]; j++){
            temp_factor = temp_factor*j;
            }
            factoriels.push_back(temp_factor);
            temp_factor = 1;
        }
        
    }
    for (int i = 0; i < size(factoriels); i++){
        std::cout << factoriels[i] << "\n";
    }
    

}