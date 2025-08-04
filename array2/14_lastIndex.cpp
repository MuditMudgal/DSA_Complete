#include<iostream>
#include<vector>
using namespace std;
int main(){

//METHOD 1 - Using idx variable; 
    vector<int> v;
    for(int i=0;i<=7;i++){
        int x;
        cin>>x;

        v.push_back(x);

    }
    int target;
    cout<<"Enter target : ";
    cin>>target;

    int idx=0;
    for(int i=1;i<=7;i++){
        if(v[i]==target){
            idx=i;
        }
    }
    cout<<idx;








//METHOD 2  **last loop occurence break
    //cin in vector
    // for(int i=0;i<=7;i++){
    //     int x;
    //     cin>>x;

    //     v.push_back(x);
    // }

    // int target;
    // cout<<"enter target : ";
    // cin>>target;

    // for(int i=7 ; i>0 ; i--){
    //     if(v[i]==target)  {
    //         cout<<i;
    //         break;
    //     }
        
    // }
 
 
}