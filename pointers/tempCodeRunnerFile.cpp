#include<iostream>
using namespace std;


int main(){
    /*
    int arr[]={1,4,35};
    cout<<"The addresses fo arr is : "<<&arr[1]<<endl;
    cout<<"The addresses fo arr is : "<<&arr<<endl;
    cout<<"The addresses fo arr is : "<<arr+1<<endl;


    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr+1)<<endl;

    int *p = &arr[0];
    cout<<2[arr]<<endl;
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(p)<<endl;
    */
   int arr[10];
//    arr = arr+1;
    int *p = &arr[0];
    cout<<p<<endl;
    p = p+11;
    cout<<p<<endl;


    return 0;
}