#include<iostream>
using namespace std;

int sumArr(int arr[],int size){
    int add = arr[0];
    for (int i=1; i<size; i++){
        add= add + arr[i];
    }
    return add;
}

int main(){ 
    int size;
    cout<<"Enter the size"<<endl;
    cin>>size;

    int arr[10];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int sum = sumArr(arr,size);
    cout<<endl<<sum<<endl;
}