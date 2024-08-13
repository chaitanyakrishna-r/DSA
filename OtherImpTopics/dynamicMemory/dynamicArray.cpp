#include<iostream>
using namespace std;

void printArr(int *arr,int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" , ";
    }cout<<endl;
}

int getSum(int* arr,int n){
    int sum = 0;
    for(int i=0 ;i<n; i++){
        sum +=arr[i];
    }
    return sum;
}


int main(){
    // dynamic allocation of memory

    
    char *ch = new char;
    cout<<sizeof(*ch);
    cout<<sizeof(ch);


    int  *num = new int;
    *num = 25;
    cout<<*num<<endl;
    cout<<num++<<endl; 
    cout<<num<<endl; 



    int n;
    cout<<"Enter the number; "<<endl;
    cin >> n ;
    int* arr = new int[n];
    cout<<"Enter the array; "<<endl; 
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans = getSum(arr,n);
    cout<<ans<<endl;
    printArr(arr, n);
    delete []arr;
    printArr(arr, n);
    return 0;
}