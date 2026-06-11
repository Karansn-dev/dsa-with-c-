#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr;
    int n ;
    cout<<"enter the size of the array = ";
    cin>> n;

     
    vector<int> v2(3, 5);  
     
    
     for(int i = 0; i <n ; i++){
         arr[i] = i+1;
       }
  arr.pop_back();

      for(int i =0; i<n; i++){
      cout<< arr[i] << " ";
     
    for(int i =0; i<n; i++){
    cout<< v2[i] << " ";
}
}   
            