#include <iostream>
using namespace std;

int main(){


    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    int i =1;
    while (i <= n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;

    }
    
    int x =1;
    while (x <= n)
    {
        int y=1;
        while (y<=n)
        {
            cout<<(n-y+1)<<" ";
            y++;
        }
        cout<<endl;
        x++;

    }
    

}
