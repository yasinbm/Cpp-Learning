#include <iostream>
#include <string>
using namespace std;


int main(){
    std::string fullname;
    std::cout<< "Please enter your full name." << "\n";
    getline(cin, fullname);
    std::cout<< "Hello " << fullname <<"\n";  
    return 0;

}