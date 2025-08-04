#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reverse(vector<int> &v){
    int start=0;
    int end=v.size()-1;
    while(start<=end){
        // swap(arr[start],arr[end]);
        int temp = v[start];
        v[start] = v[end];
        v[end] = temp;
        start++;
        end--;
    }

}
void reversePart(int start,int end,vector<int> &v){
    while(start<=end){
        // swap(arr[start],arr[end]);
        int temp = v[start];
        v[start] = v[end];
        v[end] = temp;
        start++;
        end--;
    }

}
int main(){
    
    vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);
    v.push_back(8);
    int n= v.size();

    int k;
    cin>>k;
    display(v);
    reversePart(0,n-k-1,v);
    reversePart(n-k,n-1,v);
    reversePart(0,n-1,v);
    display(v);

 
 
}