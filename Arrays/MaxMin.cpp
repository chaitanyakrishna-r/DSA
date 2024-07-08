//Find the Max and Min value in array

#include<iostream>
using namespace std;


// int main(){
//  int arr[10]={0,2,3,4,5,6,7,-8,9,10};
//  int size=10;
//  int min=arr[0];
//  int max =arr[0];
//  for(int i=1; i<size; i++){
//    if(min>arr[i]){
//     min=arr[i];
//    }
//    else if(max<arr[i]){
//     max=arr[i];
//    }
//  }
//  cout<<min<<endl;
//  cout<<max<<endl;
// }

int getMax(int arr[],int size){
    int max=INT32_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
    
}

int getMin(int arr[],int size){
    int Mini=INT32_MAX;


    for(int i=0; i<size; i++){
        Mini= min(Mini,arr[i]);
        // if(arr[i]<Min){
        //     Min=arr[i];
        // }
    }
    return Mini;
    
}

int main(){
    
    int size;
    cin>>size;

    int arry[20];
    for(int i=0; i<size; i++){
        cin>>arry[i];
    }
    int max = getMax(arry,size);
    cout<<max <<endl;
    cout<<getMin(arry,size)<<endl;
    cout<<INT32_MAX<<" max"<<endl;
    cout<<INT32_MIN<<" min"<<endl;
} 