#include<iostream>
#include<vector>
using namespace std;
int main(){
 
//Capacity remains same after even popback half elements 

    vector<int> v;

    v.push_back(6);
    v.push_back(4);
    v.push_back(10);
    v.push_back(9);
    v.push_back(6);
    v.push_back(4);
    v.push_back(10);
    v.push_back(9);
    v.push_back(6);
    v.push_back(4);
    v.push_back(10);
    v.push_back(9);
    v.push_back(6);
    v.push_back(4);
    v.push_back(10);
    v.push_back(9);
    
    cout<<"Before capacity : "<<v.capacity()<<endl;

    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;



    for(int i=0;i<=3;i++){
        v.pop_back();
    }
    
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    cout<<"After capacity : "<<v.capacity();
 
}