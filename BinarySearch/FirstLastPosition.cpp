#include<iostream>
using namespace std;

// int FirstAndLast(int arr[],int size, int key){
//     int start=0;
//     int end=size-1;


//     int mid=start+(end-start)/2;

//     while (start<=end)
//     {
//         if(arr[mid] == key){
//             cout<<mid<<":"<<arr[mid]<<endl;
//             int first = mid;
//             while(arr[first]==key){
//                 first--;
//             }
//             cout<<"first posiiton is at "<<first+1<<endl;
//             int last = mid;
//             while (arr[last] == key)
//             {
//                last++;
//             }
//             cout<<"last position is at "<<last-1<<endl;
//             return first;
//             break;
//         }

//         else if(arr[mid] < key){
//             start= mid+1;
//         }

//         else{
//             end = mid-1;
//         }

//         mid=start+(end-start)/2;
//     }
//     return -1;
// }


// chatgpt solution


void FirstAndLast(int arr[],int size,int key){
    // initialze
    int start=0;
    int end=size-1;
    int mid = start+(end-start)/2;

    int first= -1;
    int last= -1;

    // first position 
    while (start<=end)
    {
        if(arr[mid] == key){
            first=mid;
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    //
    start=0;
    end=size-1;
    mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid] == key){
            last=mid;
            start=mid+1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }


    if(first !=-1 ){
        cout<<"The first position is at "<<first<<endl;
        cout<<"The last position is at "<<last<<endl;

    }else{
        cout<<"not found"<<endl;
    }
}

int main(){
    int arr[8]={0, 0 ,1 ,1 ,2 ,2, 2, 2};
   FirstAndLast(arr,8,2);
    
    return 0;
}
