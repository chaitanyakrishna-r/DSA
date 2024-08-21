#include<iostream>
using namespace std;


int getSum(int arr[],int size){
    
    // base case
    if(size <= 0){
        return 0;
    }

   return arr[size - 1] + getSum(arr, size - 1);
}


int main(){
    int arr[5]= {1,2,3,4,5};
    int ans = getSum(arr, 5);
    cout<<ans<<endl;
    return 0;
}