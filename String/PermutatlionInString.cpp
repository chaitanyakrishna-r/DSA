#include<iostream>
#include<string>
using namespace std;


void printArr(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
bool checkEqual(int a[26],int  b[26]){
    for(int i=0; i<26; i++){
        if(a[i] != b[i])
            return 0;  
    }
    return 1;
}

bool PermutationInString(string str1, string str2){

    // character count array;
    int arr1[26]={0};
    for(int i = 0; i<str1.length(); i++){
        arr1[str1[i]-'a']++;
    }
    printArr(arr1,26);

    // traverse in window
    int i = 0;
    int windowSize = str1.length();
    int arr2[26]={0};

    // running for first window
    while(i <windowSize && i<str2.length()){
        int index = str2[i] - 'a';
        arr2[index]++;
        i++;
    }
    printArr(arr1,26);
    printArr(arr2,26);
  
    if(checkEqual(arr1,arr2))
        return 1;
    
    while(i<str2.length()){

        arr2[str2[i]-'a']++;
        arr2[str2[i - windowSize]-'a']--;
        
        i++;
        printArr(arr1,26);
        printArr(arr2,26);
        if(checkEqual(arr1,arr2))
        return 1;
    }
    return 0;
}


int main(){
    string str1 = "ab";
    string str2 = "adboaoo";

    int ans = PermutationInString(str1, str2);
    cout<<"The ans is ; "<<endl;
    cout<<ans<<endl;
    return 0;
}