#include<iostream>
using namespace std;
int printarr(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

// int digi(int arr[],int n){
//     int digi = 0;
//     for(int i=0; i<n; i++){
//         digi = digi * 10 + arr[i];
//     }
//     return digi;
// }

// void addArr(int arr1[],int n, int arr2[],int m,int sum[] ,int k){
//     int array1 =  digi(arr1,n);
//     int array2 =  digi(arr2,m);
//     int sum1 = array1+array2;
//     for(int i=k-1; i>=0; i--){
//         int addsum = sum1 %10;
//         sum1  = sum1/10;
//         sum[i] = addsum;
//     }
//     printarr(sum, k);
// }

//bette approach

int addArr(int arr1[],int n, int arr2[],int m, int arr3[],int k){
    int carry =0;
    int i = n-1;
    int j = m-1;
    int a = k-1;
    while(i>=0 && j>=0){
        int sum = arr1[i] + arr2[j]+carry;
        carry = sum / 10;
        sum = sum % 10;
        arr3[a] = sum;
        a--;
        i--;
        j--;
    }
    //first case
    while (i>=0)
    {
        int sum = arr1[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        arr3[a] = sum;
        a--;
        i--;
    }
    //second case
    while (j>=0)
    {
        int sum =carry;
        carry = sum / 10;
        sum = sum % 10;
        arr3[a] = sum;
        a--;
        j--;
    }
    //last case
    while(carry !=0){
        int sum = arr1[i] + arr2[j];
        carry = sum / 10;
        sum = sum % 10;
        arr3[a] = sum;
        a--;
    }
    
    printarr(arr3,k);
}
// using vector it will be clean;
int main(){
    int arr1[]={4, 5, 1};
    int arr2[]={3};
    int arr3[]={};
    int n=3,m=1;
    int k=n+m;
    addArr(arr1,n, arr2,m,arr3, k);
    return 0;
}