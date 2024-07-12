#include<iostream>
using namespace std;
// liner search

// int TotalOcc(int arr[],int key, int size){
//     int count=0;
//     for(int i=0; i<size; i++){
//         if(arr[i]==key){
//             count++;
//         }
//     }
//     return count;
// }

// binary search


// first
int firstOcc(int arr[], int key, int size){
    int start=0;
    int end=size-1;
    int mid= start+(end-start)/2;

    int first=0;

    while (start <= end )
    {
        if(arr[mid] == key){
            first = mid;
            end= mid-1;
        }
        else if(arr[mid] < key){
            start = mid+1;
        }else{
            end= mid-1;
        }
        mid= start+(end-start)/2;
    }
    return first;
}

// last
int lastOcc(int arr[], int key, int size){
    int start=0;
    int end=size-1;
    int mid= start+(end-start)/2;

    int last=0;

    while (start <= end )
    {
        if(arr[mid] == key){
            last = mid;
            start= mid+1;
        }
        else if(arr[mid] < key){
            start = mid+1;
        }else{
            end= mid-1;
        }
        mid= start+(end-start)/2;
    }
    return last;
}

int main(){
    int arr[7]={1,1,2,2,2,4,5};
    int ansfirst = firstOcc(arr,2,7);
    int anslast = lastOcc(arr,2,7);
    cout<<"first position is at "<<ansfirst<<endl;
    cout<<"last position is at "<<anslast<<endl;
    int total =(anslast-ansfirst)+1;
    cout<<"The total Number of key is "<<total<<endl;
    return 0;
}