#include<iostream>
using namespace std;
int main(){
    int arr[]={9,100,1,2,102,4,5,6,7};
    int max=arr[0];
    for(int i=0;i<=8;i++){
        if(arr[i]>max)  max=arr[i];
    }

    cout<<max;
 
 
}