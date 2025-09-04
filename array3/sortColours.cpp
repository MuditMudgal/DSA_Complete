#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(0);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(0);
    int r=0;
    int b=0;
    int w=0;

    for(int i=0;i<nums.size();i++){
        if(nums[i]==r)  r++;
        if(nums[i]==b)  b++;
        if(nums[i]==w)  w++;
    }

    //printing
    for(int i=0;i<nums.size();i++){
        if(i<r)  nums[i]=0;
        else if(i<(r+b))  nums[i]=1;
        else nums[i]=2;
    }

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    // for(int i=0;i<r;i++){
    //     cout<<0<<" ";
    // }
    // for(int i=0;i<b;i++){
    //     cout<<1<<" ";
    // }
    // for(int i=0;i<w;i++){
    //     cout<<2<<" ";
    // }
 
 
 
}