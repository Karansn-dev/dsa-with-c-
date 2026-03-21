/*introduction to obj oriented programming */

#include <iostream>
using namespace std;

class Student {
    public:

    string name;
    int age ;

    void display(){

        cout << name << endl;
        cout << age << endl;

    }
};

int main (){
    Student s1; // created an obj 

    s1.name = "karan singh negi ";
    s1.age = 21;

    s1.display();

    return 0;

}