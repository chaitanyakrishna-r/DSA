#include<iostream>
using namespace std;

int main(){
    int n=245;

    int pos=1;
    int sos=0;
    
    while(n != 0){
        int digit = n%10;
        pos=pos*digit;
        sos=sos+digit;
        n=n/10;
        cout<<"pos: "<<pos<<endl<<"sos: "<<sos<<endl<<"digit : " <<digit<<endl<<n <<endl;
    }
    int answer = pos-sos;
    cout<<answer<<endl;
    
}