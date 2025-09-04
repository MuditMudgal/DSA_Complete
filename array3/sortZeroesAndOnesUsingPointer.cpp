#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){

    vector<int> arr;
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(1);

    int i=0;
    int j=arr.size()-1;

    while(i<j){
        if(arr[i]==0)  i++;
        if(arr[j]==1)  j--;
        if(i>j)  break;
        if(arr[i]==1 and arr[j]==0) {
            //swapping
            arr[i]=0;
            arr[j]=1;
            i++;
            j--;
        }
    }

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    
}