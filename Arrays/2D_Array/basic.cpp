#include<iostream>
using namespace std;



bool isPresent(int arr[][3],int target, int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}


int main(){
    // create 2d array
    // int arr [3][3];

    int arr1 [4][3]={{1,5,9},{7,5, 3},{6,4,5},{7,9,2}};
    cout<<"Enter the number in 2d array"<<endl;

    // taking input row wise
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         cin >>arr[i][j];
    //     }
    // }

    // taking input colwise;
    // for(int j=0; j<3; j++){
    //     for(int i=0; i<3; i++){
    //         cin >>arr[i][j];
    //     }
    // }
     
    // print output
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         cout <<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cout <<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

    int target;
    cout<<"enter the target"<<endl;
    cin>>target;
    if(isPresent(arr1,target, 4, 3)){
        cout<<"The target is found"<<endl;
    }
    else{
        cout<<"The target is not found"<<endl;
    }

    return 0;
}