#include<iostream>
using namespace std;

int main(){
    int n ,i;
    bool prime = true;
    cin>>n;

   for(i = 2; i<n;i++){
    if(n%i==0){
        prime = false;
        break;

    }

    if(prime==false || n==1){
        cout<<"False";

    }
    else{
        cout<<"True ";

    }   
    return 0;
    

   }
}