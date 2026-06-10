#include <iostream>
using namespace std;

int solve(int n , int sum){ 
       sum  = n*(n+1)/2;
        return sum ;
     
}

int main() {
    int n;
    cin >> n;
    
    if(n == 0 ) {
        cout << n << endl;}
        
    int sum = solve(n,sum);
    cout << sum  ;
 
       
}