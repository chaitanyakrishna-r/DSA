#include<iostream>
using namespace std;

void print2D(int arr[][4],int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool binarySearch(int arr[][4],int row, int col, int target){
    int rowIndex = 0;
    int colIndex = col-1;
    while(rowIndex < row && colIndex >= 0){
        int element= arr[rowIndex][colIndex];
        if(element == target){
            cout<<"fount at "<<rowIndex<<" and "<<colIndex<<endl;
            return 1; 
        }
        if(element < target){ 
            rowIndex++;
        }
        else{
            colIndex--;
        }
    }
    cout<<"not found"<<endl;
    return 0;
}

int main(){
    int arr[4][4]={{1,4,7,11},{2,5,8,12},{3,6,9,16},{10,13,14,17}};
    print2D(arr,4,4);
    binarySearch(arr, 4, 4, 1); 
    return 0;
}