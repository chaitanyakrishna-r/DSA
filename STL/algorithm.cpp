#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    v.push_back(6);
    v.push_back(7);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<< " ";
    }
    cout<<endl<<"Finding 5 "<<binary_search(v.begin(),v.end(),5)<<endl;
    cout<<"Upper bound"<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"lower bound"<<lower_bound(v.begin(),v.end(),5)-v.begin()<<endl;

    int a =3;
    int b= 5;
   
    cout<<"max of "<<max(a,b)<<endl;
    cout<<"min of "<<min(a,b)<<endl;
    swap(a,b);
    cout<<"a : "<<a<< " "<<" b "<<b<<endl;

    string ab ="abcdefg";
    cout<<ab<<endl;
    reverse(ab.begin(),ab.end());
    cout<<ab<<endl;

    rotate(v.begin(),v.begin()+3,v.end());
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl; 

    sort(v.begin(),v.end());
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}