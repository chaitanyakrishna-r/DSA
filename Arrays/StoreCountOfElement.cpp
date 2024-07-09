#include<iostream>
using namespace std;

void printarr(int arr[],int size ){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void countElements(int arr[],int size,int counts[]){
    bool counted[size] ={false};
    
    for(int i=0; i<size; i++){
        // this wil check already its been counted 
        if(counted[i]){
            continue;
        }
        int count=1;//counts number its self;
        for(int j=i+1; j<size ;j++){
            if(arr[i] ==  arr[j]){
                count++;
                counted[j]=true;//marks as counted
            }
        }
        counts[i]=count;
  
    }
    
}

int main(){
    int arr[5]={5,6,6,6,7};
    // To store the count we will create a new array
    int count[5]={0};
    countElements(arr,5,count);
    printarr(arr,5);
    printarr(count,5);
    return 0;
}