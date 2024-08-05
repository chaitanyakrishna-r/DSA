#include<iostream>
using namespace std;


// to sum row wise;
void RowSum(int arr[][3],int row, int col){
    int largestSum = INT32_MIN;
    int rowIndex = -1;
    for(int i=0; i<row; i++){
        int sum=0;
        for(int j=0; j<col; j++){
            sum += arr[i][j];
        }
        cout<<"The sum of "<<i<<" row is : "<<sum<<endl;
        if(largestSum < sum)
        { 
            largestSum = sum;
            rowIndex = i;
        }
    }
    cout<<"The largest sum is : "<<largestSum;
    cout<<" at the row : "<<rowIndex<<endl;

}
// to sum column wise;
void colSum(int arr[][3],int row, int col){
    int largestSum = 0;
    for(int j=0; j<col; j++){
        int sum=0;
        for(int i=0; i<row; i++){
            sum = sum + arr[i][j];
        }
        cout<<"The sum of "<<j<<" col is : "<<sum<<endl;
        if(largestSum < sum)
        {
            largestSum = j;
        }
    }
    cout<<"The largest sum at :"<<largestSum<<endl;
}


int main(){
    int arr[4][3];
    // taking input
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    // printing 2d array
    cout<<"Printing the array"<<endl;
      for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    RowSum(arr,3,3);
    return 0;
}