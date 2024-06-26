#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    


    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=(n-i))
        {
            cout<<" "<< " ";
            j++;
        }

       int k=1;
        while (k<=i){
        cout<<k<<" ";
        k++;
        }

        int a=1;
        while (a<=(i-1))
        {
            cout<<(i-a)<< " ";
            a++;
        }

        cout<<endl;
        i++;
    
    }
     
}