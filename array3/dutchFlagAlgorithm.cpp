#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(0);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(0);
    int n=nums.size();
    int lo=0;
    int hi=n-1;
    for(int i=1;i<n;i++){
        if(nums[i]==0){
            nums[i]==0;
            lo++;
        }
        else if(nums[i]==2){
            nums[n-i]=2;
            hi--;
        }
        else {
            nums[i]==1;
        }
    }

    display(nums);

}