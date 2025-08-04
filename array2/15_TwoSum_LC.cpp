#include<iostream>
using namespace std;
int main(){
 
    // int nums[] = {3,7,9,6,1,5,3};  //0,6  4,5
    // int target = 6;
    
    int nums[] = {3,3};  //0,6  4,5
    int target = 6;
    
    int size=sizeof(nums)/sizeof(int);
    
    for(int i=0;i<=size-1;i++){
        for(int j=i+1;j<=size-1;j++){
            if(nums[i]+nums[j]==target){
                cout<<i<<" "<<j<<endl;
            }
        }
    }
 
}