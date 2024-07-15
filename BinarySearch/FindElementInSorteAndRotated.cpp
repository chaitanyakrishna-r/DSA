#include<iostream>
using namespace std;

// approach-1

// int FindElement(int arr[],int size,int key){
//     int start=0;
//     int end=size-1;
//     int mid=start+(end-start)/2;

//     while (start <= end)
//     {
//        if(arr[mid]==key){
//         cout<<mid<<endl;
//         return mid;
//        }
//        if(arr[start] <= arr[mid]){
//             if(arr[start] <= key && key < arr[mid]){
//                 end = mid-1;
//             }else{
//                 start = mid+1;
//             }
//         }
//         else{
//             if(arr[mid] < key && key <=arr[end]){
//                 start =mid+1;
//             }else{
//                 end=mid-1;
//             }
//         }
       
//         mid=start+(end-start)/2;
//     }
//     cout<<"-1"<<endl;
//     return -1;
// }

int findElement(int arr[],int size,int key){

    int start =0;
    int end=size-1;
    int mid=start+(end-start)/2;

    while(start<end){
        if(arr[mid] >= arr[0]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid=start+(end-start)/2;
    }
    int pivots = start;
    cout<<"pivot index at : "<<pivots<<endl;

   
    if(arr[pivots] <= key && key <= arr[size-1]){
        
        start=pivots;
        end=size-1;
        while(start <= end){
            mid=mid=start+(end-start)/2;
            if(arr[mid] == key){
                cout<<"index at :" <<mid<<endl;
                return mid;
            }
            if(arr[mid] < key){
                start = mid+1;
            }
            else{
                end= mid-1;
            }
        }
    
    }
    else{
        start=0;
        end=pivots;
        while (start <= end)
        {
             mid=mid=start+(end-start)/2;
            if(arr[mid] == key){
                cout<<"index at :" <<mid<<endl;
                return mid;
            }
            if(arr[mid] < key){
                start = mid+1;
            }
            else{
                end= mid-1;
            }
        }  
    }
    cout<<"not found";
    return -1;
}


// int pivot(int arr[],int size){
//     int start=0;
//     int end=size-1;
//     int mid= start+(end-start)/2;

//     while (start < end)
//     {
//         if(arr[mid] >= arr[0]){
//             start = mid+1;
//         }
//         else{
//             end = mid;
//         }
//         mid=start+(end-start)/2;
//     }
//     cout<<start<<endl;
//     return start;

// }
// int binarySearch(int arr[],int start,int end, int key){

//     int mid= start+(end-start)/2;

//     while(start <= end){

//         if(arr[mid] == key){
//             cout<<"Index at "<<mid<<endl;
//             return mid;
//         }
//         if(arr[mid] < key){
//               start = mid+1;
//         }
//         else{
//             end = mid-1;
//         }
//         mid= start+(end-start)/2;
//     }
//     cout<<"key Not found"<<endl;
//     return -1;
// }

int main(){
    int arr[5]={7,8,3,4,5};
    int key = 9;
    int size = 5;
    // int pivots = pivot(arr,size);

    findElement(arr,5,9);
    // if(arr[pivots] <= key && key<=arr[size-1]){
    //     cout<<key<<" ";
    //     binarySearch(arr,pivots,size-1,key);
    // }else{
    //     cout<<key<<" ";
    //     binarySearch(arr,0,pivots,key);
    // }

    return 0;
}