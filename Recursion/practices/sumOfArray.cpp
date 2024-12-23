#include<iostream>
using namespace std;

int sumOfArray( int arr[], int size){
   
//    base case
    if(size == 0){
        return 0;
    }


    int sum = arr[0] + sumOfArray(arr + 1, size - 1);
 
    return sum;
}


int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5; 
    int ans = sumOfArray(arr, size);

    cout<<"The Sum of Array is : "<< ans <<endl;
    return 0;
}