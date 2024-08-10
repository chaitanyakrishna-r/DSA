#include<iostream>
using namespace std;

void update(int& num){
    num++;
   }
int main(){

   /*

    cout<<i<<endl;

    int& j = i;
    j++;
    j=28;
    cout<<j<<i<<endl;
    return 0;
    int i = 8;
    */
   
   int n = 9;
   cout<<"before; "<<n<<endl;
   update(n);
   cout<<"after; "<<n<<endl;


}