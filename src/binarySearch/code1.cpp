#include <iostream>
using namespace std;

int bianrySearch(int arr[], int size , int key){
    int start = 0;
    int end  = size - 1;
    int mid = start + (end - start )/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }

        if( arr[mid] > key){
            end = mid -1;
        }
        else{
            start = mid +1;
        }

        mid = start + (end - start )/2;
    }

    return -1;
}

int main(){

    int even[6] = {2,3,4,10,32,42};
    int odd[5]={4,5,12,42,410};

    int evenIndex = bianrySearch(even,6,4);
    cout<<"Here is the index ="<< evenIndex <<endl;

    int oddIndex = bianrySearch(odd,5,4);
    cout<<"Here is the index ="<< oddIndex <<endl;
}
