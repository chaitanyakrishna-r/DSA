#include<iostream>
using namespace std;

// int Pivot(int arr[],int size){
//     int start = 0;
//     int end = size-1;
//     int mid = start+(end-start)/2;
    

   
//     while (start < mid && mid < end)
//     {    
//         int left  = 0;
//         int right  = 0;
//         cout<<"start"<<endl;
//        for(int i=0; i<mid; i++){
//           left = left +arr[i];
//        } 
//         // cout<<left<<" "<<endl;
//        for(int i=end; mid < i; i--){
//           right = right + arr[i];
//        } 
//         // cout<<right<<" "<<endl;
       
//         if(left == right){
//             cout<<mid<<endl;
//             return mid;
//         }
//         else if(left < right){
//             mid++;
//         }else{
//             mid--;
//         }
//     }
//     // cout<<left<<" left"<<endl;
//     // cout<<right<<" right"<<endl;
// }


// liner search approach Tc is O(n)
// int pivot(int arr[],int size){

//     int Totalsum=0;

//     for(int i=0; i<size ; i++){
//         Totalsum += arr[i];
//     }

//     int leftsum=0;
//     for(int i=0; i<size; i++){


//         Totalsum = Totalsum-arr[i];
//         cout<<leftsum<<" == "<<Totalsum<<endl;
//         if(leftsum == Totalsum){
//             return i;
//         }
//         leftsum += arr[i];
//     } 
//  return -1; 
// }


// binary search approach O(log N)
int pivot(int arr[], int size){
    int start =0;
    int end= size-1;
    int mid = start+(end-start)/2;

    while(start < end){
        if(arr[mid] >= arr[0]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start+(end-start)/2;
    }
    cout<<"pivot Index at "<< mid<<endl;
    return start;
}

int main(){
    int arr[6]={7,9,10,2,3,3};
    pivot(arr,5);
    return 0;
}