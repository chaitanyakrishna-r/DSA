#include<iostream>
using namespace std;

// int powerOf(int ans , int a, int b){
    

//     // base case()
//     if(b == 0){
//         return ans;
//     }
//     ans = ans * a;

//     cout<<ans<<endl;
//    return powerOf(ans, a, b-1);
     
// }

int powerOf(int a, int b){


    //base case
    if(b == 0)
        return 1;
    if( b== 1)
        return a;
    

    //recursive call
    int ans = powerOf(a, b/2);

    if((b & 1) == 0){
        return ans * ans;
    }else{
        return a * ans * ans;
    }
}


int main(){
//    int ans =  powerOf(1, 5, 3);
//    cout<<ans<<endl;


    int a, b;
    cout<<"Enter the value of a and b : "<<endl;
    cin>>a >> b;

    cout<<"POwer of  a and b is :" << powerOf(a, b)<<endl; 
    return 0;
}