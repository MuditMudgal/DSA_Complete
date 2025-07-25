#include<iostream>
using namespace std;
int main(){
 
    int arr[7]={1,7,3,3,6,8,9};
    int x = 10;
    
    //traversing
    // for(int i=0;i<=6;i++){
    //     if(arr[i]==x){
    //         cout<<i;
    //         break;
    //     }
    // }
  
    //with using bool 
    bool flag = true;
    for(int i=0;i<=6;i++){
        if(arr[i]==x)   flag=false;
    }
    if(flag==false)  cout<<"present";
    else            cout<<"not present";

}
