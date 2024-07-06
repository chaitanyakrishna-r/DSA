#include<iostream>
using namespace std;


// int arrayInit(int array[],int n){
//     for(int i=0; i < n ;i++){
//         array[i]={0};
//     }
//     return array;
// }

void printArray(int arr[],int n){
    for(int i=0; i < n ;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n=8;
    int arr[n]={1,2,3,4,5,6} ;
    printArray(arr,n);
    cout<<endl<<arr[8]<<endl;
    cout<<"done"<<endl;


    int array[7];
    for(int i=0; i<=7; i++){
        array[i]={2};
    }
   printArray(array,7);
   cout<<endl<< sizeof(array)/sizeof(int)<<endl;
   char ch[4];
   double firstDouble[8];
   float firstfloat[8];
   bool firstBool[2];
}