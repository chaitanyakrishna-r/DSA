#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;

    int row=1;
    while (row<=n)
    {
        int j=1;
        while (j<=(n-row+1))
        {
           cout<<j<<" ";
           j++;
        }


         int k=1;
         while (k<=(row-1))
         {
            cout<<"*" << " ";
            k++;
         }


          int l=1;
          while (l<=(row-1))
          {
            cout<<"*" << " ";
            l++;
          }
          
        int a=1;
        while (a<=(n-row+1)){
            cout<<(n-row-a+2)<< " ";
            a++;
        }
        
        cout<<endl;
        row++;
    }
    

}   