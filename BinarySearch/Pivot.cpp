#include<iostream>
using namespace std;

int Pivot(int arr[],int size){
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;

    int left  = 0;
    int right  = mid+1;
    while(start < mid ){
        left = left+ arr[start];
        start++;
    }
    while(mid < end ){
        right = right+ arr[start];
        end--;
    }
    cout<<left<<" left"<<endl;
    cout<<right<<" right"<<endl;
}


int main(){
    int arr[5]={1,2,3,5,4};
    Pivot(arr,5);
    return 0;
}