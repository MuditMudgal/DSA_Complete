#include<iostream>
using namespace std;
int main(){
 
    int arr[]={4,1,5,3,2};
    int max = 0;

    for(int i=0;i<=4;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"Maximum largest : "<<max<<endl;   //5

    int smax = 0;
    for(int i=0;i<=4;i++){
        if(smax<arr[i] && arr[i]!=max){
            smax=arr[i];
        }
    }
    cout<<"Second Maximum largest : "<<smax<<endl;

 
}