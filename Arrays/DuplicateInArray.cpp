#include<iostream>
using namespace std;

// int duplicateElement(int arr[],int size){
   
//     for(int i=0; i<size; i++){
//         for(int j=i+1;j<size ; j++){
         
//             if(arr[i] == arr[j]){
//                 return arr[i];
//             }
//         }
//     }
// }
int duplicate(int arr[],int size){
    int ans=0;
    
    
    for(int i=0; i<size; i++){
        ans= ans^arr[i];
    }

    for(int i=1; i<size; i++){
        ans= ans^i;
        
    }
    return ans;
}


int main(){
    int arr[7]={7,8,6,3,4,5,3};
    // cout<<endl<<"The duplicate element is "<<duplicateElement(arr,5);
    // return 0;
    cout<<endl<<"The duplicate element is "<<duplicate(arr, 7);
}

