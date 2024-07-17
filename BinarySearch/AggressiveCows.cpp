#include<iostream>
#include<algorithm>
using namespace std;

void printArr(int arr[], int size){
    for(int i=0; i <size; i++){
        cout<<arr[i]<<" ";
    }
} 

int maxi(int arr[],int size){
    int maxi=INT32_MIN;
    for(int i=0; i<size ; i++){
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}

int mini(int arr[], int size){
    int mini=INT32_MAX;
    for(int i=0; i<size; i++){
        if(arr[i]<mini){
            mini = arr[i];
        }
    }
    return mini;
}
bool isPossible(int arr[],int size, int mid, int k){
    int lastPosition = arr[0];
    int cowCount = 1;
    for(int i=0; i<size ; i++){
       
        if((arr[i] - lastPosition ) >= mid){
            cowCount++;
            if(cowCount == k){
                return true;
            }
         lastPosition  = arr[i];
        }
    }
    return false;
}
int aggressiveCow(int arr[],int size, int k){
    sort(arr,arr+size);
    int start = 0;
    int end=maxi(arr,size)-mini(arr,size);
    int mid = start+(end-start)/2;
    int ans=-1;
    while(start <= end){
        if(isPossible(arr,size, mid, k)){
            ans = mid;
            start = mid+1;
        }else{
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    
    return ans;
}

int main(){
    int arr[]={4,2,1,3,6};
    int size = sizeof(arr)/sizeof(int);
    int ans = aggressiveCow(arr,size,2);
    cout<<"ans is : "<<ans<<endl;
    // printArr(arr,size);
    return 0;
}