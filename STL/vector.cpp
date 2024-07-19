#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> v;

    cout<<" capacity : "<< v.capacity()<<endl;
    v.push_back(4);

    cout<<" capacity : "<< v.capacity()<<endl;
    v.push_back(2);
    cout<<" size : "<<v.size()<<endl;

    cout<<" capacity : "<< v.capacity()<<endl;
    v.push_back(5);
    cout<<" size : "<<v.size()<<endl;

    cout<<" capacity : "<< v.capacity()<<endl;
    v.push_back(2);
    cout<<" size : "<<v.size()<<endl;
    
    cout<<" size : "<<v.size()<<endl;
    v.push_back(1);
    cout<<" capacity : "<< v.capacity()<<endl;
    cout<<" element at 3 is : "<<v.at(2)<<endl;

    cout<<v.front();
    cout<<v.back()<<endl;

    // v.clear();
    
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

 


    vector<int> arr(v);
    arr.erase(arr.begin(),arr.begin()+2);
    for(int i=0; i<v.size(); i++){
        cout<<endl<<v[i]<<" ";
    }
    return 0;
}