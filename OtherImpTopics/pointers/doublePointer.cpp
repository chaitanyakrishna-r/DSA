#include<iostream>
using namespace std;


int main(){
     int i =5;
     int *ptr1 = &i;
     int **ptr2 = &ptr1;

     cout<<"printing ptr1 : "<<ptr1<<endl;
     cout<<" address of ptr1 : "<<&ptr1<<endl;
    //  cout<<**ptr2<<endl;
    //  cout<<i<<endl;

    cout<<i<<endl;
    cout<<*ptr1<<endl;
    cout<<**ptr2<<endl;

    
    cout<<*ptr2<<endl;//prints content of ptr1;that is address of i;
    cout<<&i<<endl;
    cout<<ptr1<<endl;

    cout<<&ptr1<<endl;
    cout<<ptr2<<endl;

    return 0;
}