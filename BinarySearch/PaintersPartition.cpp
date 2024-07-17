#include<iostream>
using namespace std;

bool isPossible(int arr[],int size, int k, int mid){
    
    int boardSum =0;
    int painter=1;

    for(int i=0; i < size; i++){
        if(boardSum+arr[i] <= mid){
            boardSum += arr[i];
        }
        else{
            painter++;
            if(painter > k || arr[i] > mid){
                return false;
            }
            boardSum = arr[i];
        }

    }
    return true;
}

int paintersPartition(int arr[],int size, int k){
    int start=0;
    int sum=0;
    for(int i=0; i<size; i++){
        sum += arr[i];

    }
    
   int end = sum;
   int mid = start+(end-start)/2;
   int ans = -1;
   while (start <= end)
   {
    if(isPossible(arr, size, k, mid)){
        ans = mid;
        end = mid-1;
    }else{
        start = mid+1;
    }
    mid=start+(end-start)/2;
   }
   return ans;
}


int main(){
    int arr[]={ 5,5,5,7};
    int size =sizeof(arr)/sizeof(int);
    int k=4;
    int ans = paintersPartition(arr,size,k);
    cout<< "answer is :"<<ans;
    return 0;
}