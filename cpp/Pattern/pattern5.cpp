#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int i = 1;
    int count = 1;

    while (i<=n)
    {
        int j=1;
         while (j<=i)
         {
            cout<<count<<" ";
            j++;
            count++;
        }
       cout<<endl;
       i++;
    }
//  pattern
    i=1; 
    int k; 
    while(i<=n)
    {
        int j=1;
        k = i;
        while (j<=i)
        {
            cout<<k<<" ";
            j++;
            k++;
        }
        cout<<endl;
        i++; 
    }

    // other apporach

    int row=1;
    while(row<=n){
        int col =0;
        while (col<row)
        {
            cout<<col+row<< " ";
            col++;
        }
        cout<<endl;
        row++; 
    }
}