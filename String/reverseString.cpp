#include<iostream>
using namespace std;

void reverseChar(char name[],int size){
    int start = 0;
    int end = size-1;
    while (start < end )
    {
        swap(name[start++],name[end--]);
    }
    
}
int getLen(char name[]){
    int count =0;
    for(int i=0; name[i] !='\0';i++){
        count++;
    }
    cout<<"The length of the array is : "<< count<<endl;
    return count;
}
int main(){
     char name[10];
     cin>>name;
    int n = getLen(name);
    cout<<"The array before reverse " <<name<<endl;
    reverseChar(name,n);
    cout<<"The array after reverse " <<name<<endl;
    return 0;
}