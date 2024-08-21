#include<iostream>
using namespace std;
// brute force
// bool isSorted(int arr[],int size){
//     for(int i=0; i<size; i++){
//         if(arr[i]>arr[i+1]){
//             cout<<"The array is not sorted "<<endl;
//             return 0;
//         }
//     }
//     cout<<"The array is sorted "<<endl;
//     return 1;
// }

// using recursion
bool isSorted(int arr[],int size){

    // base case
    if(size == 0 || size ==1)
        return true;

   if(arr[0] > arr[1])
        return false;

   else{
        bool reaminingPart = isSorted(arr + 1, size - 1);
        return reaminingPart;
   }
}

int main(){

    int arr[6]={1,2,6,5,6};
     bool ans = isSorted(arr,5);
     if (ans){
        cout<<"Array is sorted "<<endl;
     }
     else{
        cout<<"Array is not sorted "<<endl;
     }

    return 0;
}