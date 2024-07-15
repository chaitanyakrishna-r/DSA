#include<iostream>
using namespace std;

int FindElement(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;

    while (start <= end)
    {
       if(arr[mid]==key){
        cout<<mid<<endl;
        return mid;
       }
       if(arr[start] <= arr[mid]){
        if(arr[start] <= key && key < arr[mid]){
            end = mid-1;
        }else{
            start = mid+1;
        }
        }
        else{

        if(arr[mid] < key && key <=arr[end]){
            start =mid+1;
        }else{
            end=mid-1;
        }
        }
       
        mid=start+(end-start)/2;
    }
    cout<<"-1"<<endl;
    return -1;
}


int main(){
    int arr[5]={7,8,1,2,3};
    FindElement(arr,5,7);
    return 0;
}