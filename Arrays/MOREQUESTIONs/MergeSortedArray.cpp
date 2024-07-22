#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void PrintArr(vector<int> arr){
    for(int i=0; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
//Approach 1;
// void merge(int arr1[],int n, int arr2[],int m,int arr3[]){
//    int i=0;
//    int j=0;
//    int k=0;
 
//    while(i<n && j<m){
//         if(arr1[i]<arr2[j]){
//             arr3[k++]=arr1[i++];
        
//         }else{
//             arr3[k++]=arr2[j++];
            
//         }
    
//    }
//    while(i<n)
//    {
//     arr3[k++] = arr1[i++];
//    }
//    while(j<m)
//    {
//     arr3[k++] = arr2[j++];
//    }

//    PrintArr(arr3,12);
// }

//appraoch 2

void mergeARR(vector<int>& arr1,int n, vector<int> arr2,int m ){
    int i=n-1;
    int j=m-1;
    int k= (n+m)-1;
    arr1.resize(n+m);
    while (i>=0 && j>=0)
    { 
        if(arr1[i] > arr2[j]){
            arr1[k--] = arr1[i--];
        }
        else{
            arr1[k--] = arr2[j--];    
        }
    }
    while (j>=0)
    {
         arr1[k--] = arr2[j--];
  
    }
    
    PrintArr(arr1);
}
int main(){
   
    vector<int> arr2={2,3,4,5,6};
    vector<int> arr1={1,2,3,8,9,12,13};
   
    // int arr3[12];
    mergeARR(arr1,7,arr2, 5);
    PrintArr(arr1);

    return 0;
}