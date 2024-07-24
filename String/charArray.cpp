#include<iostream>
using namespace std;

int getLength(char name[]){
    int i=0; 
    while(name[i] != '\0'){
        i++;
    }
    cout <<"The length of the array is "<<i<<endl;;
    return i;
}


int main(){
    char name[10];
    cin>>name;
    getLength(name);
    cout<<"This output is "<<name;
    return 0;
}