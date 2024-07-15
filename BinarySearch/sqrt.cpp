#include<iostream>
using namespace std;

long long int sqrt( int num){
    int start=0;
    int end = num;
    long long int mid = start+(end-start)/2;
    int ans=-1;

    while (start <= end)
    {
      long long int square = mid*mid;

       if(square == num){
        cout<<"mid "<<mid;
        return mid;
       }
       else if(square > num){
        end = mid-1;
       }
       else if(square < num){
        ans = mid;
        start = mid+1;
       }
       
       mid = start+(end-start)/2;
    }
    cout<<"ans "<<ans;
    return ans;

}

int main(){
    
    int num=38;
    int ans = sqrt(num);
    return 0;
}