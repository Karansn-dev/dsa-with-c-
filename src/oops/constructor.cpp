#include <iostream>
using namespace std;

class rectangle {
private:
    int length;
    int breadth;

public:
    // Constructor
    rectangle(int length, int breadth){
        this->length = length; 
        this->breadth = breadth;
    }

    // area() function defined outside the class
    int area();

    // perimeter() function defined outside the class
    int perimeter();
};

// function defining using scope resolution operator "::"
int rectangle::area() { return (length * breadth); }

int rectangle::perimeter(){
    return 2 * (length + breadth);
}

int main(){
    // Creating object
    rectangle r(2, 3);
    cout << "perimeter: " << r.perimeter() << endl;
    cout << "area: " << r.area() << endl;
    return 0;
}