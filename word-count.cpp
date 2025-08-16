/*
This program asks the user to enter a sentence.
It then loops through each character of the sentence
and uses the function isalpha() to check if the character
is an alphabetic letter (A–Z or a–z).
If the character is a letter, the counter (count) is increased by one.
Finally, the program prints the total number of letters
(excluding spaces, digits, and punctuation).

Example:
Input:  "Hello 123!"
Output: Number of letters: 5
*/

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
