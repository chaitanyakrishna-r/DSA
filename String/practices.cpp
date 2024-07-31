#include<iostream>
#include<string>
using namespace std;


void printArr(int arr[]){
    for(int i=0; i<26; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
// function for checking counts of str1 and str2;
bool checkEqual(int arr1[], int arr2[]){
    for(int i=0; i<26; i++){
        if(arr1[i] != arr2[i])
        return 0; 
    }
    return 1;
}

bool PermutationInString(string str1, string str2){

    // character count of str1
    int count1[26]={0};
    for(int i=0; i<str1.length(); i++){
        count1[str1[i]-'a']++;
    }

// create count for str2 with respect to windowsize
    int count2[26]={0};
    int i=0; 
    int windowSize = str1.length();
    while(i < windowSize){
        count2[str2[i]-'a']++;
        i++;
    }
    printArr(count1);
    printArr(count2);
    if(checkEqual(count1, count2))
        return 1;

    while (i<str2.length())
    {
        char newCh = str2[i];
        int index = newCh - 'a';
        count2[index]++;

        char oldCh = str2[i-windowSize];
        index = oldCh  - 'a';
        count2[index]--;

        printArr(count1);
        printArr(count2);
        if(checkEqual(count1, count2))
            return 1;

        i++;
    }
    
    
}


int main(){
    string str1="ab";
    string str2="aasboabo";
    int ans = PermutationInString(str1,str2);
    cout<<ans;
    return 0;
}