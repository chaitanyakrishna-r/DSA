#include<iostream>
using namespace std;


int main(){
// direct method;
    // int row;
    // cin>>row; 

    // // create array of pointers of size row;
    // int** arr= new int *[row];

    // // defining each col
    // arr[0] = new int [3]{1,2,3};
    // arr[1] = new int [2]{1,2};
    // arr[2] = new int [3]{1,2,3};

    // for(int i=0; i<row; i++){
    //     for(int j=0; j<3;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // // deallocation of columns
    // delete [] arr[0];
    // delete [] arr[1];
    // delete [] arr[2];

    // // deallocation of arr pointers;
    // delete [] arr;


// using loop

    // taking row and columns
    cout<<"Enter the row ; "<<endl;
    int row;
    cin>>row;
    int *col = new int[row];
    cout<<"Enter the column : "<<endl;
    for(int i=0; i<row;i++){
        cin>>col[i];
    }

    // create 2D array
    int ** arr =  new int* [row];
    for(int i=0; i<row; i++){
        arr[i] = new int [col[i]];
    }

    // Taking input 
    cout<<"enter the array: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col[i]; j++){
            cin>>arr[i][j];
        }
    }

    // printing array
    for(int i=0; i<row; i++){
        for(int j=0; j<col[i]; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    // deallocation of memory;
    for(int i=0; i<row; i++){
        delete [] arr[i];
    }
    delete [] arr;
    delete [] col;


    return 0;
}