#include<iostream>
using namespace std;


bool isPossbile(int arr[], int chief, int prata, int mid){
     
     int pratas = 0;

     for(int i=0; i<chief; i++){
        int time = 0;
        int j=1;
        while (time + (arr[i] * j) <= mid)
        {
            pratas++;
            time = time + (arr[i] * j);
            j++;
        }
        }
        if(pratas < prata){
            return false;
        }
    return true;
}

int rotiPrata(int rank[], int chief, int prata){
    int start = 0;
    int sum = 0;
    for(int i=0; i<chief; i++){
        sum += rank[i];
    }
    int end = chief * prata *sum;
    int ans =-1;

    while (start <= end)
    {
       int mid = start+(end-start)/2;
       if(isPossbile(rank, chief, prata, mid)){
        ans = mid;
        end = mid-1;
       }else{
        start = mid+1;
       }
    }
    cout<<ans;
    return ans;
}


int main(){
    int rank []={1,1,1,1,1,1,1,1};
    int chief = 8;
    int prata = 8;
    rotiPrata(rank, chief, prata);
    return 0;
}