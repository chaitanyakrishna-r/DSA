#include<iostream>
#include<vector>
using namespace std;

void PrintArr(vector<int> v,int m){
    for(int i=m; i<v.size(); i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}

void ReverseARR(vector<int> v,int m){
    int start = m+1;
    int end = v.size()-1;

    while (start <= end)
    {
       swap(v[start],v[end]);
       start++;
       end--;
    }
    PrintArr(v,m);
}


int main(){

    vector<int> v;
    int m = 2;

    v.push_back(11);
    v.push_back(1);
    v.push_back(12);
    v.push_back(8);
    v.push_back(9);
    v.push_back(6);

    PrintArr(v,0);
    ReverseARR(v,m);
    return 0;
}