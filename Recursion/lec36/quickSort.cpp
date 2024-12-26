#include <iostream>
using namespace std;

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int partition(int arr[],int s, int e ){
    int pivot = arr[s];
    int count = 0;
    for(int i=s+1; i<=e; i++){
        if(arr[i] <= pivot){
            count++;
        }   
    }
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);


    //make sure lesser part <a> higher part
    int i = s;
    int j = e;
   
    while (i < pivotIndex && j> pivotIndex)
    {
        while (arr[i] <= pivot){
            i++;
        }
        while (arr[j] > pivot){
            j--;
        }
        if(i < pivotIndex && j> pivotIndex){
            swap(arr[i++], arr[j--]);
        }
        
    }
    
    return pivotIndex;
   
}


void quickSort(int *arr, int s, int e){

    //base case
    if(s >= e){
        return;
    }

    //calling partition
    int partitionIndex = partition(arr, s, e);


    //recursive call
    //left part
    quickSort(arr, s, partitionIndex -1);
    //right part
    quickSort(arr, partitionIndex + 1, e );
}

int main(){
    int arr[5]={3,1,4,5,2};

    quickSort(arr, 0, 4);
    printArr(arr, 5);
    return 0;
}