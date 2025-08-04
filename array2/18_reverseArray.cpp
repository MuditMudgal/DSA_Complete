#include<iostream>
#include<algorithm>
using namespace std;
  
int main(){
 
    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(int);
    
    int start=0;
    int end=n-1;
    
    while(start<=end){
        //swap(start,end)
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 
 
 
 
}