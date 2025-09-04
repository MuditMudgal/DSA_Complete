#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void sort1(vector<int>&v){
    int noz=0;
    int noo=0;
    //Counting
    for(int i=0;i<v.size();i++){
        if(v[i]==0)  noz++;
        else noo++;
    }

    //printing 0's and 1's    
    // for(int i=0;i<noz;i++){
    //     cout<<"0"<<" ";
    // }
    // for(int i=0;i<noo;i++){
    //     cout<<"1"<<" ";
    // }

    for(int i=0;i<v.size();i++){
        if(i<noz) v[i]=0;
        else  v[i]=1;
    }
    
}

int main(){
 
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    display(v);

    sort1(v);
    display(v);
    
}