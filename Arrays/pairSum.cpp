#include<iostream>
#include<algorithm>
using namespace std;

void Printarr(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void pairSum(int arr[],int s,int n){
    
    for (int i=0;i<n ; i++)
    {
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==s){
                cout<<arr[i]<<" "<<arr[j]<<" "<<endl;
            }
        }
       }
    }

int main(){
    int arr[5]={2 ,-3 ,3 ,3 ,-2};
    int arr1[5]={2,1,3,5,4};
    pairSum(arr,0,5);
    sort(arr1,arr1+4);
    Printarr(arr1,5);
    return 0;
}