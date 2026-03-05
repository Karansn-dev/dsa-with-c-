#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        
        int n = arr.size();
        
        int largest = -1;
        int second_largest = -1;
        
        for(int i = 0; i < n; i++) {
            
            if(arr[i] > largest) {
                second_largest = largest;
                largest = arr[i];
            }
            else if(arr[i] > second_largest && arr[i] != largest) {
                second_largest = arr[i];
            }
        }
        
        return second_largest;
    }
};

int main() {
    
    vector<int> arr = {1, 2, 3, 4, 5};
    
    Solution obj;   // create object
    
    int result = obj.getSecondLargest(arr);  // call function
    
    cout << "Second Largest Element = " << result << endl;
    
    return 0;
    
}