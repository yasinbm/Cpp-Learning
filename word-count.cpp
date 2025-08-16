#include <iostream>
#include <string>

using namespace std;


int main(){
    string sentence;
    int count = 0;
    cout<< "Please write a sentence here: ";
    getline(cin, sentence);
    for (char c: sentence){
        if (isalpha(c)){
            count++;
        }
    }
    cout<< "Number of letters: " << count << "\n";
    
    return 0;
}