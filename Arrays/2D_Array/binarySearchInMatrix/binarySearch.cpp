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

bool BinarySearch(int arr[][4], int row, int col,int target){

    int start = 0; 
    int end = row*col-1;
    while(start <= end){
        int mid = start+(end-start)/2; 

        if(arr[mid/col][mid%col] == target){
            cout<<"Found at index "<<mid/col<<" and "<<mid%col<<endl;
            cout<<"Target found! ";
            return 1;
        }
        if(arr[mid/col][mid%col] < target){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    cout<<"Target not found"<<endl;
    return 0; 
}


int main(){
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{11,12,13,15}};
    print2D(arr,3,4);
    BinarySearch(arr,3, 4, 15);
    return 0;
}