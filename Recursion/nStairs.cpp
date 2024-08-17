#include<iostream>
using namespace std;


int nStairs(int steps){
    // base case
    if(steps < 0){
        return 0; 
    }
    if(steps == 0){
        return 1;
    }

    // RR
    int ans = nStairs(steps - 1) + nStairs(steps - 2) + nStairs(steps - 3);
    return ans;
}


int main(){
    int ans = nStairs(3);
    cout<<ans<<endl;
    return 0;
}