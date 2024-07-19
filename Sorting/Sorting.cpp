#include<iostream>
using namespace std;

void PrintArr(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
void bubbleSort(int arr[],int size){
    
     bool isSwaped = false;
    for(int i=1 ; i<size; i++){
        for(int j=0; j<size-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwaped = true;
            }
        }
        if(isSwaped == false){
            cout<<"not swaped"<<endl;
            break;
        }
    }
    cout<<"bubble sort : ";
    PrintArr(arr,size);
}
void SelectionSort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        int minIndex = i;
        for(int j=i+1; j<size ;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
    cout<<"selection sort : ";
    PrintArr(arr,size);
}
void insertionSort(int arr[],int size){
    for(int i=1; i<size; i++){
        int temp = arr[i];
        int j=i-1;
        while(j >= 0){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }else{break;}
             j--;
        }
        arr[j+1] =temp; 
    }
    cout<<"insertion sort : ";
    PrintArr(arr,size);
}

int main(){
    int arr[5]={3,2,1,6,4};
   int arr1[7]={8, 22, 7, 9, 31, 5, 13};
    int size =5;
    SelectionSort(arr,size);
    bubbleSort(arr1,7);
    insertionSort(arr1,7);
    return 0;
}