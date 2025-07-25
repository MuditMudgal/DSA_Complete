#include<iostream>
using namespace std;
int main(){
 
    int n;
    cout<<"size : ";
    cin>>n;

    int arr[n];   // [0,1,2,3,4,5,6]
    
    for(int i=0;i<=n-1;i++){   //input
       cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){   //output
        cout<<arr[i]<<" ";
    }

 
}