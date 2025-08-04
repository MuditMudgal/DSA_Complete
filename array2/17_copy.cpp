#include<iostream>
#include<vector>
using namespace std;
int main(){
 
    // vector<int> v = {10,20,30,40,50};
    // vector<int> v2 = {};

    // for(int i=v.size()-1 ; i>0 ; i++){
    //     v2[i]=v[i];
    
    // }


    int arr[] = {10,20,30,40,50};     // 0 1 2 3 4
    int n = sizeof(arr)/sizeof(int);        
    int arr2[n];                      // 0 1 2 3 4         0-4  1-3  2-2  3-1  4-0

    int j = n-1;
    for(int i=0 ; i<=n-1 ; i++){
        arr2[j]=arr[i];
    }


    for(int i=0;i<=n-1;i++){
        cout<<arr2[i]<<" ";
    }

   


}