// #include<iostream>
// using namespace std;

// int duplicateElement(int arr[],int size){
   
//     for(int i=0; i<size; i++){
//         for(int j=i+1;j<size ; j++){
         
//             if(arr[i] == arr[j]){
//                 return arr[i];
//             }
//         }
//     }
// }


// int main(){
//     int arr[5]={1,1,2,3,4};
//     cout<<endl<<"The duplicate element is "<<duplicateElement(arr,5);
//     return 0;
// }

#include <iostream>
using namespace std;

int findDuplicate(int arr[], int size) {
    int xorSum = 0;
    
    // XOR all elements in the array
    for (int i = 0; i < size; ++i) {
        xorSum ^= arr[i];
    }
    
    return xorSum;
}

int main() {
    int arr[5] = {1, 3, 2, 3, 4};
    int duplicate = findDuplicate(arr, 5);
    
    cout << "The duplicate element is " << duplicate << endl;
    
    return 0;
}
