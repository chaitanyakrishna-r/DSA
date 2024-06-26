#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

// pattern

    int row = 1;
    while(row<=n){
        int col=1;
        int value= row ;
        while (col<=row)
        {
            cout<<value<<" ";
            value--;
            col++;
        }
        cout<<endl;
        row++;
    }

    // other approach

    int i = 1;
    while(i<=n){
        int j=0;
        while (j<i)
        {
           cout<<i-j<<" ";
           j++;
        }
        cout<<endl;
        i++;
    }

    int x=1;
    char ch = 65;
    while(x<=n){
        int y=1;
        while (y<=n){
            cout<<ch<<" ";
            y++;
            
        }
        cout<<endl;
        x++;
        ch++;
    }

    int a =1;
    while (a<=n)
    {
        int b=1;
       while (b<=n)
       {
        cout<<char('A'+b-1)<<" ";
        b++;
       }
        cout<<endl;
        a++; 
    }
    
    int row1=1;
    while (row1<=n)
    {
        /* code */
    }
    
}