#include<iostream>
#include<algorithm>
using namespace std;

void Printarray(int arr[],int size){
 for(int i=0; i<size;i++){
    cout<<arr[i]<<" ";
 }
}

void sortone(int arr[], int size){
    int i= 0 ;
    int j= size-1 ;
    while (i<j)
    {
       while(arr[i] == 0 && i<j){
        i++;
       }
       while(arr[j] == 1 && i<j ){
        j--;
       }
       if(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
       }
        
       
    }
    
}

int main(){
    int arr[6]={1,0,1,0,1,0};
    int size=6;

    // using sort
    // sort(arr,arr+size);
    // Printarray(arr,6);
    // return 0;
    sortone(arr,size);
    Printarray(arr,size);
}