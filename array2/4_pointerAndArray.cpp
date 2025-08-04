#include<iostream>
using namespace std;
int main(){
    int arr[]={4,3,1,2,5};
    int *ptr = arr;
    cout<<ptr<<endl;
    
    // for(int i=0;i<=4;i++){
    //     cout<<ptr[i]<<" ";
    // }

    *ptr = 8;   //ptr[0]=8  same
    ptr++;
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }
}