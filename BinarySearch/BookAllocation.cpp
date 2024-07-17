#include<iostream>
using namespace std;

bool isPossible(int arr[], int size, int m,int mid){
    int pageSum=0;
    int studentCount=1;

    for(int i=0; i<size; i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }else{
            studentCount++;
            if(studentCount > m || arr[i] > mid ){
                return false;
            }
            pageSum = arr[i];
        }
    }
   
    return true;
}

int allocateBooks(int arr[],int size,int m){
   int start =0;
   int sumArr=0; 
   for(int i=0; i<size; i++){
    sumArr += arr[i];
   }
   int end=sumArr;
   int mid = start+(end-start)/2;
   int ans =-1;
   while (start <= end)
   {
        if(isPossible(arr, size, m ,mid)){
            ans = mid;
            end = mid-1;
        }else{
            start = mid+1;
        }
        mid = start+(end-start)/2;
    }
   
    return ans;
}

int main(){
    int arr[4]={10,20,30,40};
    int ans = allocateBooks(arr,4,2);
    cout<<"The maximum number of pages allocated to a student minimum is : "<<ans;
    return 0;
}