#include <iostream>
using namespace std;

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int n, result = 0;
    
    for (n = 0; n < 5; n++) {
        result += array[n];
        cout << result;
    }
    
    return 0;
}