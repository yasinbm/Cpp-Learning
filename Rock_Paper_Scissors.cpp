#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    srand(time(NULL));
    int computer;
    int user;
    bool youWin = true;


    std::cout << "==================\n";
    std::cout << "Rock Paper Scissors Lizard Spock!\n";
    std::cout << "==================\n";
    std::cout << "1) Rock\n";
    std::cout << "2) Paper\n";
    std::cout << "3) Scissors\n";
    std::cout << "4) Lizard\n";
    std::cout << "5) Spock\n";
    std::cout << "Enter your choice (1-5): ";

    // get input from user
    std::cin >> user;
    computer = 1 + rand()%5;
    std::cout << "Computer choice: " << computer << "\n";
    
    if (user == computer){
        std::cout << "Your choices are equal!";
    }
    if ((user == 1 && computer == 3) || (user == 1 && computer == 4)){
        youWin == true;
        std::cout << "Result: " << youWin << ": Win";
    }
    else if ((user == 2 && computer == 1) || (user == 2 && computer == 5)){
        youWin == true;
        std::cout << "Result: " << youWin << ": Win";
    }
    else if ((user == 3 && computer == 2) || (user == 3 && computer == 4)){
        youWin == true;
        std::cout << "Result: " << youWin << ": Win";
    }
    else if ((user == 4 && computer == 2) || (user == 4 && computer == 5)){
        youWin == true;
        std::cout << "Result: " << youWin << ": Win";
    }
    else if ((user == 5 && computer == 1) || (user == 5 && computer == 3)){
        youWin == true;
        std::cout << "Result: " << youWin << ": Win";
    }
    else {
        youWin = false;
        std::cout << "Result: " << youWin << ": Lose";
    }



}