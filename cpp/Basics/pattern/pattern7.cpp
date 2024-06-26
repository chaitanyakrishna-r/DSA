#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

// pattern
 

    int i=1;
  
    while(i<=n){
        int j=1;
       
        while (j<=n)
        {
            char ch = 'A'+(i+j)-2;
            cout<<ch<<" ";
            j++;
        }
    
        cout<<endl;
        i++;  
    }

    // int row=1;
    // while(row<=n){
    //     int col=1;
    //     while(col<=row){
            
    //         cout<<char('A'+(row-1))<<" ";
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    int row=1;
    char ch = 'A';
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<ch<<" ";
            col++;
            ch++;
        }
        cout<<endl;
        row++;
    }

    int a =1;
    char value;

    while(a<=n){
        int b =1;
        // value='A'+a -1;
        while(b<=a){
            value = 'A'+(a+b)-2;
            cout<<value<<" ";
            b++;
            // value++;
        }
        cout<<endl;
        a++;
    }


    int row2 = 1;
    while(row2<=n){
        int col2=1;
        while(col2<=row2){
            cout<<char('A'+n-row2+col2-1)<<" ";
            col2++;
        }    
        cout<<endl;
        row2++;
        }

}