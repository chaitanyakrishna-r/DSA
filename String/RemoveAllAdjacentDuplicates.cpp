#include<iostream>
#include<string>
using namespace std;

// void removeAdjacentDuplicates(string &s){
//     bool isDone = true;
//     while(isDone){
//         isDone = false;
//     for(int i=0; i<s.length();i++){
//         if(s[i] == s[i+1]){
//             s.erase(i,2);
//             isDone = true; 
//             break; 
//         }
//     }
//     }
// }
string removeAdjacentDuplicates(string s){
    // empty string
    string ans ="";
    for(int i=0; i<s.length(); i++){
        char currentCharacter = s[i];
        if(ans.empty()){
            ans.push_back(currentCharacter);
            cout<<"In first loop "<<ans<<endl;
            cout<<"back "<<ans.back()<<endl;
        }
        else if(currentCharacter == ans.back()){
            ans.pop_back();
             cout<<"In after pop "<<ans<<endl;
        }
        else if(currentCharacter != ans.back()){
            ans.push_back(currentCharacter);
             cout<<"In second loop "<<ans<<endl;
        }

    }
    return ans;
}


int main(){
    string s ="azxxzy";
    cout<<"before "<<s<<endl;
    string ans = removeAdjacentDuplicates (s);
    cout<<"after "<<ans<<endl;
    return 0;
}