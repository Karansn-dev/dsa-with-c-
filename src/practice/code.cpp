// This is a simple C++ program that prompts the user to enter their age and then determines if they are an adult or not based on the input.
#include <iostream>
using namespace std;

int main() {
    int age ;
    cout << "Enter your age: ";
    cin >> age;
    if (age < 18){
        cout << "you are not an adult yet." << endl;
    }
    else {
        cout << "you are an adult now." << endl;
    }
    return 0;
}
