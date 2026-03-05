#include<iostream>
using namespace std;

int sum(int x, int y , int a , int b){
    cout<< x+y+a+b<<endl;
}

int main(){
    int a = 10, b = 12 , x=0,y=9;
    sum(a,b,x,y)    ;

    return 0;
}