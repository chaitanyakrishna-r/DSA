#include<iostream>
#include<vector>
using namespace std;

void PrintSprial(int arr[][3],int row, int col){

    vector<int> ans;
    int count = 0;
    int total = row* col; 

    // initizaling
    int rowStart = 0;
    int colStart = 0;
    int rowEnd = row-1;
    int colEnd = col-1;
    while (count < total)
    {
        
    
    // for starting row
    for(int j = colStart; j <= colEnd; j++){
        cout<<arr[rowStart][j]<<" ";
        count++;
    }
    rowStart++;
    // for ending col
    for(int i=rowStart; i<= rowEnd; i++){
        cout<<arr[i][colEnd]<<" ";
        count++;
    }
    colEnd--;
    // for ending row
    for(int j=colEnd;j>= colStart;j--){
        cout<<arr[rowEnd][j]<<" ";
        count++;
    }
    rowEnd--;

    // for starting col
   for(int i=rowEnd; i >= rowStart; i--){
        cout<<arr[i][colStart]<<" ";
        count++;
    }
    colStart++;
    
    }
}


int main(){
    int arr[3][3] ={{1,2,3},{4,5,6},{7,8,9}};
    PrintSprial(arr,3, 3);
    return 0;
}