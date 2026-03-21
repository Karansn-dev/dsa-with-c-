#include<iostream>

using namespace std;

class Hero{
    public:

    int health ;
    int age ;
    char level;

    char getHevel(){
    return level;
    }

    void setHealth(int h){
        health = h;

    }

};

int main(){

    Hero karan ;
    karan.setHealth(34);
    cout << "karan's health is " << karan.health << endl;

    return 0;
}
