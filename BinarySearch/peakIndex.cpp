#include<iostream>
using namespace std;

int peakIndex(int arr[],int size){
    int start=0;
    int end = size-1;
    int mid ;

    
    while (start < end)
    {
       mid = start+(end-start)/2;
       if(arr[mid] < arr[mid+1])
       {
        start=mid+1;
       }else{
        end = mid;
       }
       
       
    }
    return start;
}


int main(){
    int arr[7]={2,3,4,5,1,1,1};
    int ans = peakIndex(arr,7);
    cout<<arr[ans]<<" at index : "<<ans ;
    return 0;
}