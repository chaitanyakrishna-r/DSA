#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void  printArr(vector<int> arr){
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<"  ";
    }cout<<endl;
}
void PrintArr(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
// void RotateArr(int arr[],int n,int k){
//     for(int i=n-1; i>=k; i--){
        
//         int j=n-1;
//         int temp= arr[n-1];

//         for(; j>=0; j--){
//             arr[j]=arr[j-1];
//         }
//         arr[j+1] = temp;
//      printArr(arr,n);
//     }
// }
// void rotateARR(int arr[],int n,int k){
//     int i=0;
//     int j=k+1;
//     while(i <= k && j<n){
//         swap(arr[i++],arr[j++]);
//     }
//     while(i <= k){
//         int temp = arr[i];
//         int a=k;
//         for(; a<n; a++){
//             arr[a]=arr[a+1];
//         }
//         arr[a-1]= temp;
//         i++;
//     }
//      printArr(arr,n);
// }

// using algorithm Stl
// void algoRotateArr(vector<int> arr,int k){
//     rotate(arr.begin(),arr.begin()+k+1,arr.end());
//     printArr(arr);
// }



// better apporach
// void rotateArr(vector<int> arr,int k){
//     vector <int> temp(arr.size());

//     for(int i=0; i<arr.size();i++){
//         int index = (i+k)%arr.size();
//         temp[index] = arr[i];
//     }
//     arr = temp;
//     printArr(arr);
// }

//chatgpt apporach
void Reverse(int arr[],int start, int end){
    while(start < end){
        swap(arr[start++],arr[end--]);
    }
    PrintArr(arr,7);
}

void chatgptRotateArr(int arr[],int n,int k){
    k= k%n;
    Reverse(arr,0,n-1);
    Reverse(arr,0,k-1);
    reverse(arr+k,arr+n);//stl reverse
    PrintArr(arr,7);
}

int main(){

    // vector<int> arr={1,2,3,4,5,6,7};
    int arr1[7]={1,2,3,4,5,6,7};
    // algoRotateArr(arr,3);
    // rotateArr(arr,3);
    chatgptRotateArr(arr1,7,3);
    return 0;

}