#include<iostream>
using namespace std;

// using single pointer
void reverseStr(string& str, int start){
    int n = str.length();

    // base case
    if(start>= n/2){
        return;
    }
    swap(str[start], str[n-start-1]);
    reverseStr(str, start + 1);
}



// void reverseStr(string& str, int start, int end){
    
//     //base case
//     if(start>end){
//         return ;
//     }
//     swap(str[start],str[end]);
//     start++;
//     end--;
//     reverseStr(str, start, end);
   
// }


int main(){
    string str = "chaitanya";
    int start = 0;
    int end = str.length()-1;
   
    reverseStr(str, start);
    cout<<str<<endl;
    return 0;
}