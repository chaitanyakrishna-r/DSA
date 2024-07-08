#include<iostream>
using namespace std;

int setbit(int num){
    int count=0;
    for(;num !=0;) {
        if(num&1){
        count++;
        }
        num=num>>1;
    }
    return count;
}


int main(){
    int a,b;
    cin>>a>>b;
    int counta = setbit(a);
    int countb = setbit(b);
    cout<<counta;
    cout<<countb;
    cout<<"The Total Number of Setbit is : "<<counta+countb<<endl;
    return 0;
}