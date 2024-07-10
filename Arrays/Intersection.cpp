#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
// in this approach we have to use two loops
// void intersection(int arrA[],int arrB[],int n, int m){
//     int Maxsize= min(n, m);
//     int *inter = new int[Maxsize];
//     int interSize=0;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m ; j++){
//             if(arrA[i]<arrB[j]){
//                 i++;
//             }
//             if(arrA[i]>arrB[j]){
//                 j++;
//             }
//             if(arrA[i]==arrB[j]){
//                 inter[interSize++]=arrA[i];
//                 arrB[j]=INT32_MIN;
//             break;
//         }
//         }
//     }
//     printArray(inter,interSize);
// }
void intersection(int arrA[],int arrB[],int n, int m){
    int Maxsize=min(n,m);
    int *inter = new int[Maxsize];
    int interSize=0;

    int i=0,j=0;
    while (i<n && j<m)
    {
       if(arrA[i]==arrB[j]){
        inter[interSize++]=arrA[i];
        i++;
        j++;
       }else if(arrA[i]<arrB[j]){
        i++;
       }else{
        j++;
       }
    }
    printArray(inter,interSize);
}

int main(){
    int arrA[6]={2,3,5,5,6,7};
    int arrB[5]={2,2,5,5,9};
    intersection(arrA,arrB, 6, 5); 
    return 0;

}