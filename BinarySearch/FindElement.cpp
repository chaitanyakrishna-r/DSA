#include<iostream>
using namespace std;

int findElement(int arr[],int size,int key){
    int s=0;
    int end=size-1;
    int mid=s+(end-s)/2;
    while (s <= end)
    {
        if(arr[mid] == key){
            return mid;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        else{
            s = mid+1;
        }
        mid=s+(end-s)/2;
        cout<<mid<<endl;
    }
    
}

int main(){
    int arr[6]={2,3,4,5,6,7};
    int size=6;
    int key =7;
    int ans = findElement(arr,size,key);
    if(ans){
     cout<<"found at : " <<ans<<endl;
    }else{
        cout<<"key is not found"<< endl;
    }

    return 0;
}