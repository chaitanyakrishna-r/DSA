#include<iostream>
using namespace std;

int maxi(int arr[],int size){
    int max=INT32_MIN;
    for(int i=0; i<size ;i++){
        if(max<arr[i]){
            max= arr[i];
        }
    }
    return max;
}
int mini(int arr[],int size){
    int mini=INT32_MAX;
    for(int i=0; i<size ;i++){
       mini= min(mini,arr[i]);
    }
    return mini;
}
int main(){
    int arr[7]={2,5,11,1,13,6,9};

    cout<<maxi(arr,7)<<endl;
    cout<<mini(arr,7)<<endl;
 
}