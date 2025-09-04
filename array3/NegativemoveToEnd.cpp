#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
 
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(-2);
    arr.push_back(3);
    arr.push_back(-4);
    arr.push_back(-5);
    arr.push_back(6);
    arr.push_back(8);
    
    int n=arr.size()-1;
    
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }cout<<endl;    

    int i=0;
    int j=n-1;

    while(i<j){
        if(arr[i]<0) i++;
        if(arr[j]>0) j--;
        //if(i>j) break;
        else{
            //(arr[i]>0 and arr[j]<0)
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
 
 
 
}