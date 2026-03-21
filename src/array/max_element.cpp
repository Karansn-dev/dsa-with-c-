#include <iostream>
#include <climits>
using namespace  std;

int getMin(int arr[], int n){
    int min = INT_MAX;

    for(int i =0; i<n;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }

    return min;


}


int getMax(int arr[], int n){
    int max = INT_MIN;

    for(int i =0; i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }

    return max;


}

int main(){

    int size;
    cout<<"Enter the size of an array = "<< endl;
    cin>>size;

    int arr[100];
    cout<<"Enter the elements in an array  = " << endl;
    for(int i = 0; i<size;i++){
        cin>>arr[i];
    }

    cout<<"Maximum element in the array is = "<<getMax(arr, size)<<endl;
    cout<<"Maximum element in the array is = "<<getMin(arr, size)<<endl;

}