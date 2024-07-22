#include<iostream>
using namespace std;

void PrintArr(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// void moveZeros(int arr[], int n){
//     for(int i=0 ;i<n; i++){
//         if(arr[i] == 0){
//             int j=i+1;
//             for(; j<n; j++){
//                 arr[j-1]=arr[j];
//             }
//             arr[j-1]  = 0;
            
//         }
//     }
// }

// better appraoch by chatgpt
void MoveZero(int arr[],int n){
    int pos=0;
    for(int i=0;i<n; i++){
        if(arr[i] !=0){
            arr[pos++] = arr[i];
        }
      
    }
    while (pos<n)
    {
      arr[pos++] = 0;
    }
    
    PrintArr(arr,n);
}
// swap approach

void Moveze(int arr[],int n){
    int j=0;
    for(int i=0; i<n;i++){
       if(arr[i] !=0 ){
        swap(arr[i],arr[j]);
        j++;
       }
    }
    PrintArr(arr,n);
}

void movezeroLeft(int arr[],int n){
    int pos = n-1;
    for(int i=n-1;i>=0; i--){
        if(arr[i] != 0){
            arr[pos--]= arr[i];
        }

    }
    while (pos>=0)
    {
      arr[pos--]= 0;
    }
    PrintArr(arr,n);
}

int main(){
    int arr[5]={1,0,0,2,3};
    
    // MoveZero(arr,5);
    // Moveze(arr,5);
    movezeroLeft(arr,5);
    return 0;
}