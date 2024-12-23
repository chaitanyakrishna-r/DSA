#include<iostream>
using namespace std;

bool isFound(int *arr, int size , int key){
 
//  basecase
    if(size == 0 ){
        return 0; 
    }

    if(key == arr[0]){
        return true;
    }
    else{
        bool remaiPart = isFound(arr+1, size-1, key);
        return remaiPart;
    }
}


int main(){
    int arr[5] = {1,4,5,6,7};
    int size = 5;
    int key = 5;

    bool ans = isFound(arr, size, key);
    if(ans){
        cout<<"The key found "<<endl;
    }
    else{
        cout<<"The key not Found"<<endl;
    }
    return 0;
}