#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> vector){
    vector[0]=88;
    return;

}

int main(){
    
    vector<int> v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(4);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    change(v);

    cout<<"after change : ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
 
//vector is pass by value and array is pass by reference  

}