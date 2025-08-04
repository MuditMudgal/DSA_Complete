#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    // v.push_back(6);
    // v.push_back(1);
    // v.push_back(9);
    // v.push_back(0);

    // v[0]=2;
    // v[1]=4;
    // v[2]=6;
    // v[3]=8;
    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";

    
    
    // v.push_back(6);
    // v[1]=1;           // gives error or this line cant executed
    // v.push_back(9);
    // v.push_back(10);
    // v[4]=77;

    
    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";
    // cout<<v[4];


//Size of Vector && capacity
    v.push_back(6);
    cout<<v.size()<<"   ";
    cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.size()<<"   ";
    cout<<v.capacity()<<endl;
    v.push_back(9);
    cout<<v.size()<<"   ";
    cout<<v.capacity()<<endl;
    v.push_back(10);
    cout<<v.size()<<"   ";
    cout<<v.capacity()<<endl;
    
    
}