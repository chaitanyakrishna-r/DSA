#include<iostream>
using namespace std;

// global variabel;
int score = 10;

void a(){
    cout<<"In a "<<score<<endl;
}
void b(){
    cout<<"In b "<<score<<endl;
}
int main(){
    cout<<"In main "<<score<<endl;
    a(); 
    b(); 
    return 0;
}