#include<iostream>
using namespace std;
int main(){
 
    int arr[]={0,1,0,2,1,0,1,3,2,1,2,1};
    int n=sizeof(arr)/sizeof(int);

    int max=-1;
    //simple max calculate
    for(int i=n-1;i>0;i--){
        int temp=arr[i];
        arr[i]=max;
        if(temp>max){
            max=temp; 
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
 
 
 
}