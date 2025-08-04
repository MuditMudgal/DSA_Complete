#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversePart(vector<int> &v,int start,int end){
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

    display(v);
    reversePart(v,1,4);
    display(v);
 
 
 
}