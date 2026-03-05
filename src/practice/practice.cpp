#include <iostream>
using namespace std;

int main() {
    // code here
    int x,y;
    cin>>x>>y;
    auto p = x+y;
    auto q = x-y;
    auto r = x*y;
    auto s = x / y;
    auto t = x%y;
    
    cout<<p<<" "<<q<<" "<<r<<" "<<s<<" "<<t;

    return 0;
}