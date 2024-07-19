#include<iostream>
#include<array>
using namespace std;


int main(){
    array<int, 5> arr={1,5,3,6,4};
    int size = arr.size();
    cout<<"size "<<size;
    cout<<"is empty "<<arr.empty();
    cout<<"number at 2 is : "<<arr.at(2);
    return 0;
}