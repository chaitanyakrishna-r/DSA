#include<iostream>
using namespace std;

void printARR(int arr[], int size, int start=0){
    for( int i =start; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}


int main(){
    int arr[5]={1 ,2,3,4,5};
    int size = 5;
    printARR(arr, size,3);
    printARR(arr, size);
}