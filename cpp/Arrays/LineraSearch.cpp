#include<iostream>
using namespace std;

bool isFound(int arr[],int number ,int size){

     for(int i=0; i<size; i++){
        if(number == arr[i]){
            return 1;
        }
    } 
    return 0;
}

int main(){
    int arr[5]={1,5,4,7,8};
    int number;
    cin>>number;

    if(isFound(arr,number,5)){
        cout<<"found"<<endl;
    }else{
        cout<<"not found"<<endl;
    }

}