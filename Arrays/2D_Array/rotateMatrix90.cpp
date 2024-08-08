#include<iostream>
#include<vector>
using namespace std;

void print2D(int arr[][3],int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void rotate2DArray(int arr[][3],int row, int col){
    // transpose the matrix to row to col
    cout<<"before: "<<endl;
    print2D(arr,3,3);

    for(int i=0; i<row; i++){
        for(int j=i; j<col; j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

    cout<<"after transpose: "<<endl;
    print2D(arr,3,3);
    
    //reverse matrix
    for(int i=0; i<row; i++){
        int start = 0;
        int end = col-1;
        while(start <= end){
            swap(arr[i][start++],arr[i][end--]);
        }

    } 

    cout<<"reverse: "<<endl;
     print2D(arr,3,3);

}


// other appraoch;
// void rotate2DArray(int arr[][3],int row, int col){
//     vector<vector<int>> temp = matrix;

//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//           matrix[j][row-1-i]=  temp[i][j];
//         }
//     }
// }
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    rotate2DArray(arr, 3, 3);
    return 0;
}