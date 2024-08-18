#include<iostream>
#include<string>
using namespace std;

// data base for number in words
string numbers(int num){
     string arr[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    
    return arr[num];
}

void sayDigit(int n){
    // string with 0-9
    //  string arr[10]={"Zero","One","Two","Three","four","five","Six","Seven","eight","Nine"};

    // base case
    if(n == 0)
        return;
    
    // processing
    int digi = n % 10;
    n = n / 10;

    // Recursion call
    sayDigit(n);

    cout<<numbers(digi)<<" ";

   return; 
}


int main(){
    int number ;
    cout<<"Enter the number: "<<endl;
    cin>>number;

    sayDigit(number);

   
    return 0;
}