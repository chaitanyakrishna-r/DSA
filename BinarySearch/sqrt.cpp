#include<iostream>
using namespace std;

long long int sqrtInteger( int num){
    int start=0;
    int end = num;
    long long int mid = start+(end-start)/2;
    long long int ans=-1;

    while (start <= end)
    {
      long long int square = mid*mid;

       if(square == num){
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
    return ans;

}
double sqrt(int num, int tempsol, int precision){
    double factor = 1;
    double ans = tempsol;
    for(int i=0 ; i<precision; i++){
        factor = factor/10;
        for(double j=ans; j*j<num ; j = j+factor){
            ans = j;
        }
    }
   
    return ans;
}

int main(){
    
    int num =38;
    cout<<"Enter the number"<<endl;
    // cin>>num;


    int tempAns = sqrtInteger(num);
    cout<<"tempSolution : "<<tempAns<<endl;
    double squareRoot = sqrt(num, tempAns , 3);
    cout<<"Answer  : "<<squareRoot<<endl;

    return 0;
}