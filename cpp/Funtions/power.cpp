#include<iostream>
using namespace std;

int power (){
    int a,b;
    
    cin>>a>>b;
    int power = 1;
    for(int i=1; i<=b; i++){
        power = power * a;
    } 
    return power;
}


int main(){

    int answer =  power();
    cout<<endl<<"The answer is :" << answer<<endl;
}