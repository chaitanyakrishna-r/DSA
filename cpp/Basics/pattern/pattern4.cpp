#include <iostream>
using namespace std;

int main(){


    int n;
    cout<<"Enter the number";
    cin>>n;

    int i =0;
    int z =1;

    while (i<n)
    {
        int j=0;
        while (j < n)
        {
            cout<<z<<" ";
            j++;
            z++;
        }
        cout<<endl;
        i++;
    }
    

    int y=1;
    while(y<=n){

        int x = 1;
        while(x<=y){
            cout<<" * " ;
            x++;
        } 
        cout<<'\n';
        y++;
    }

    int row=1;
    while(row<=n){

        int col = 1;
        while(col<=row){
            cout<<row <<" ";
            col++;
        } 
        cout<<'\n';
        row++;
    }
}