#include<iostream>
using namespace std;

void PrintCount(int n){

    // base condition
    if(n == 0){
        return ;
    }
    //   type:head
    // recursion relation 
    PrintCount(n-1);

     // process
    cout<<n<<" ";

}


int main(){
    int n = 10;
    PrintCount(5);
    return 0;
}