//Check if a character is vowel or consonant.

#include <iostream>
#include <cctype> // REQUIRED for tolower()

using namespace std;

int main() {
    char C;
    cout << "Enter the alphabet: ";
    cin >> C;
    
    // FIX 1: Remove the confusing "bool isVowel..." line.
    // Just convert the input to lowercase directly.
    char lowerC = tolower(C); 

    // FIX 2: Check if it's actually a letter first (Optional but recommended)
    if (!isalpha(C)) {
        cout << "Invalid input! Please enter a letter." << endl;
        return 0;
    }

    if (lowerC == 'a' || lowerC == 'e' || lowerC == 'i' || lowerC == 'o' || lowerC == 'u') {
        cout << C << " is a vowel" << endl;
    } 
    else {
        cout << C << " is a consonant" << endl;
    }
    
    return 0;
}