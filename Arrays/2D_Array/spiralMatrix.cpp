#include<iostream>
#include<vector>
using namespace std;

void printSprialMatrix(int arr[][3],int row, int col){
    int count =0;
    int total = row*col;

    vector<int> ans;
    // initializing index;
    int startingRow = 0;
    int startingCol = 0;
    int endRow = row-1;
    int endCol = col-1;

    while (count<total)
    {

        // starting row 
        for(int index = startingCol; count<total && index<=endCol; index++){
            cout<<arr[startingRow][index];
            ans.push_back(arr[startingRow][index]);
            count++;
        }
        startingRow++;
        // ending col
        for(int index = startingRow; count<total && index<endRow; index++){
            cout<<arr[index][endCol];
            ans.push_back(arr[index][endCol]);
            count++;
        }
        endCol--;
        // ending row
        for(int index = endCol; count<total && index>=startingCol;index--){
            cout<<arr[endRow][index];
            ans.push_back(arr[endRow][index]);
            count++;
        }
        endRow--;
        // starting column
        for(int index = endRow; count<total && index>=startingRow; index-- ){
            cout<<arr[index][startingCol];
            ans.push_back(arr[index][startingCol]);
            count++;
        }
         startingCol++;
    }
    cout<<endl;
    cout<<"vector"<<endl;
    for(int i=0; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
}


int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printSprialMatrix(arr,3,3);
    return 0;
}