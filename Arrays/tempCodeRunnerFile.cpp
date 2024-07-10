#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void intersection(int arrA[],int arrB[],int n, int m){
    int Maxsize= min(n, m);
    int *inter = new int[Maxsize];
    int interSize=0;

    for(int i=0; i<n; i++){
        for(int j=i; j<m ; j++){
        if(arrA[i]<=arrB[j] && arrA[i]==arrB[j]){
            inter[interSize++]=arrA[i];
            break;
        }
        }
    }
    printArray(inter,interSize);
}

int main(){
    int arrA[6]={2,3,3,5,6,7};
    int arrB[5]={2,2,3,5,9};
    intersection(arrA,arrB, 6, 5); 
    return 0;

}