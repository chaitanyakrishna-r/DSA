#include<iostream>
using namespace std;

bool isSortedAndRotated(int arr[],int n){
    int count=0;
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]){
            count++;
        }
    }
    if(arr[n-1]>arr[0])
        count++;
    
    return count<=1 ;
}   

int main(){
    int arr1[]={7,8,1,2,3};
    int arr2[]={1,1,1,1,1};
    int arr3[]={7,8,1,2,9};
    int ans1 = isSortedAndRotated(arr1,5);
    int ans2 = isSortedAndRotated(arr2,5);
    int ans3 = isSortedAndRotated(arr3,5);
    if(ans3){
        cout<<ans3 <<"   : the array is sorted and rotated"<<endl;
    }else{
        cout<<"The array is not sorted and rotated"<<endl;
    }
    return 0;
}