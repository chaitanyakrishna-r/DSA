#include <iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter the number : "<<endl;
    cin>>m;

    bool isPrime = true;
    // edge case
     if(m == 0){
        cout<<"The number is zero is its prime"<<endl;
        return 0;
    }
    int n=1;
    while(n <= m){
            for(int i=2; i<n ; i++){
                if((n%i) == 0){
                isPrime = false;
                }
               
            }
            if(isPrime){
                cout<<n<<" ";
                cout<<"The number "<<n<<" is prime"<<endl;
            }
            else{
                cout<<"The number "<<n<<" is not prime"<<endl;
                isPrime = true;
            }
        n++;
    }

}