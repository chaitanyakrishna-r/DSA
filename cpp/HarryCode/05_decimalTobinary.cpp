#include<iostream>
#include<cmath>
using namespace std;


// using 2
// int DectoBin(int num){
//     int ans = 0 ;
//     int i=0;
//     while(num != 0){
//         int digit = num % 2;
//         num = num / 2;
//         ans = digit * pow(10,i) + ans;
//         i++;
//     }
//     cout<<ans;
//     return ans;
// }

int DectoBin(int num){
    int ans = 0;
    int i=0;
    int power = 1;
    while (num != 0)
    {
       int digit = num & 1;
       ans = digit * power + ans;
       power *= 10;
        // ans = ans | (digit << i++);
        num = num>>1;
    }
    cout<<ans<<endl;
    return ans;
}


int main(){
    int number ;
    cout<<"Enter the number ; "<<endl;
    cin>>number;
    DectoBin(number);

    return 0;
}