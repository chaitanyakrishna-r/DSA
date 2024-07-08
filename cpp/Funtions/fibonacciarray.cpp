#include<iostream>
using namespace std;

void fibonacci(int arr[],int size){
    if(size>0) arr[0]=0;
    if(size>1) arr[1]=1;
    int a = 0,b = 1;
    for(int i=2; i<size ;i++){
        int fib=a+b;
        arr[i]=fib;
        a=b;
        b=fib;
    }
    
}
void printArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int size;
    cin>>size;
    int n[19];
    fibonacci(n,size);
    printArray(n,size);
    return 0;
}