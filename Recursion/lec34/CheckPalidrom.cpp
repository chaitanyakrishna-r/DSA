#include<iostream>
using namespace std;


//approach 1
void Reverse(string& str, int s){
    int n = str.length();

    if(s>= n/2){
        return;
    }
    swap(str[s], str[n-s-1]);
    Reverse(str, s+1);
}
bool CheckPalidrome(string str,int i ){
    string reverseStr = str;
    Reverse(reverseStr,0);
    cout<<reverseStr<<endl;
    int n = str.length()-1;
    // base case
    if(i>n){
        return true;
    }
    if(str[i] != reverseStr[i]){
        return false;
    }else{
        return CheckPalidrome(str, i+1);
    }
   
}


//approach 2
// bool CheckPalidrome(string str, int s){
//     int n = str.length();

//     // base case
//     if(s>=n/2){
//         return true;
//     }
//     if(str[s] != str[n-s-1]){
//         return false;
//     }
//     return CheckPalidrome( str,  s+1);
    
// }


// bool CheckPalidrome(string str, int s, int e){
   

//     // base case
//     if(s>=e){
//         return true;
//     }
//     if(str[s] != str[e]){
//         return false;
//     }

    
//         s++;
//         e--;
//         return CheckPalidrome( str,  s,  e);
    
// }


int main(){
    string str = "aba";
    bool ans = CheckPalidrome(str, 0);
   cout<<ans<<endl;
    return 0;
}