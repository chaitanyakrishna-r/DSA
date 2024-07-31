#include<iostream>
using namespace std;

void printArr(int arr[]){
    for(int i=0; i<26; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

// non consecutive
// string stringCompression(string s){
//     int count[26]={0};
//     string ans="";
//     int i=0;
//     for(; i<s.length(); i++){
//         count[s[i]-'a']++;
//     }
//     printArr(count);

//     for(int j=0 ; j<26; j++){
//         char ch = j + 'a';
//         if(count[j] > 0){
//          ans.push_back(ch);
//         }
//         if(count[j] >= 1){
//             string cnt = to_string(count[j]) ;
//             for(char ch: cnt){
//                 ans.push_back(ch);
//             }
            
//         }

//     }
//     cout<<ans<<endl;
// }


// consecutive
void stringCompression(string& s){
    int i=0;
    int ansIndex =0;
    int n =s.length();


    while(i<n){
        int j = i+1;
        while(j<n && s[i] == s[j]){
            j++;
        }

    // storing current character;
        s[ansIndex++] = s[i];
        int count = j - i;
        if(count > 1){
            string cnt = to_string(count);
            for(char ch : cnt){
                s[ansIndex++] = ch;
            }
        }
        i=j;
        
    }
    cout<<ansIndex<<"index"<<endl;
}


int main(){
    string s ="abbbbbbbasgsabbbbb";
    cout<<s<<"before"<<endl;
    stringCompression(s);
    cout<<s<<endl;
    return 0;
}