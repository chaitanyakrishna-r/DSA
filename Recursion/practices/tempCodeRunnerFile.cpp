#include<iostream>
using namespace std;
void printArr(int arr[], int size){
    cout<<"size : "<<size<<endl;;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" , ";
    }
    cout<<endl;
}
 
bool binarySearch(int arr[], int start,int end, int key){
    

    printArr(arr, end+1);
    //base case 
    if(start >= end) {
        return 0;
    }

    int mid = (start + end)/2;
   
    if(arr[mid] == key){
        return true;
    }
    if(arr[mid] < key){
        return binarySearch(arr,start + mid,end, key );
    }else{
        return binarySearch(arr, start, mid, key);
    }
}

int main(){
    int arr[5] = {1,4,5,6,7};
    int size = 5;
    int key = 8;

    bool ans = binarySearch(arr, 0, size-1, key);
    if(ans){
        cout<<"The key found "<<endl;
    }
    else{
        cout<<"The key not Found"<<endl;
    }
    return 0;
}