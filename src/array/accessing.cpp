#include<iostream>
using namespace std;

int main (){
    int arr[6] = {10,23,4};
    cout<<arr<<"\n";
    cout<<sizeof(arr)<<"\n";
    cout<<sizeof(arr)/sizeof(arr[0])<<endl;
    cout<<arr[4];
}