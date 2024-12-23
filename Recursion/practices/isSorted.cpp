#include <iostream>
using namespace std ;

bool isSorted( int arr[], int size){

    //base case
    if(size == 0 || size == 1){
        return true;
    }

    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool remainingPart = isSorted(arr+1, size-1);
        return remainingPart;
    }
}

int main (){
   int arr[5] ={2,5,6,5,9};
   int size = 5;

    int ans = isSorted(arr, size);
    if(ans){
        cout<<"The Array is Sorted";
    }else{
        cout<<"The Array is not Sorted";
    }



    return 0;

}
