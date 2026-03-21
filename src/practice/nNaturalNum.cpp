#include<iostream>
using namespace std;


int func(int n ){
    int sum = 0;
    
    for (int i =0; i<=n; i++){
        sum =  sum + i;
    }

    return sum ; 

}

int main(){

    int n ;
    cout << "Enter the number "<<endl;
    cin>>n;

   cout<<func(n)<<endl;

    return 0; 
}