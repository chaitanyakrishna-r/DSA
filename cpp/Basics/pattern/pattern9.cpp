#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
   
    int i=1;

    while (i<=n)
    {
        int j=1;
        while (j<=(i-1))
        {
           cout<<" "<< " ";
           j++;
        }

        int k=1;
        while (k<=(n-i+1))
        {
           cout<<(i+k-1)<<" ";
           k++;
        }
        
        cout<<endl;
        i++;
    }
    
}