#include<iostream>
#include<algorithm>
using namespace std;

void printArray(int arr[] , int size){// array printing 
    for(int i = 0;  i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void SwapElement(int arr[] , int n ){ // main logic of swaping 
    for(int i  = 0; i <n; i+=2){
        if(i+1 < n){
            swap(arr[i],arr[i+1]);
        }  
    }
}

int main(){
    int size ;
    cout<<"Enter the size ="<<endl;
    cin>>size;

    int arr[100];

    for(int i = 0; i < size; i++){ // accessing the array element 
        cin>>arr[i];
    }
    SwapElement(arr, size);
    cout<<"swap alternate element = ";
    printArray(arr, size);
    cout<<endl;

    return 0;
}