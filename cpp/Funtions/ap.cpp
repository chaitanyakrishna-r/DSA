#include<iostream>
using namespace std;

int ap(int number){
    int ap = 3*number + 7;
    return ap;
}


int main(){
    int number;
    cout<<"Enter the number"<<endl;
    cin>>number;
    int ans = ap(number);
    cout<<ans;
    return 0;
}