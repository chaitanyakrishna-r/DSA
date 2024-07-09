#include<iostream>
using namespace std;


// basic approach
// int uniqueElement(int arr[],int size){
//     for(int i=0; i<size; i++){
//         bool isUnqiue=true;
//         for(int j=0; j<size; j++){
//             if( i!=j && arr[i] == arr[j]){
//                  isUnqiue = false;
//                  break;
//             }  
//         }  
//         if(isUnqiue){
//                 return arr[i];
//         }
           
//     }
// }
// int main(){
//     int arr[5] = {4,3,5,3,4};
//     int ans= uniqueElement(arr,5);
//     cout<<ans<<endl;
//     return 0;
// }



//better approach using Xor

int uniqueElement(int arr[],int size){
    int unique=0;
    for(int i=0; i<size; i++){
        // unique = unique ^ arr[i];or
        unique ^= arr[i];
    }
    return unique;

}
int main(){
    int arr[5]={5,5,5,5,4};
    int ans = uniqueElement(arr, 5);
    cout<<ans<<endl;

} 