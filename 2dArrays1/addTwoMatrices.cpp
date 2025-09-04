#include<iostream>
using namespace std;
int main(){

    int arr[2][2];
    int brr[2][2];
    int res[2][2];

    //cin for arr
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }   
    }
    //cin for brr
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>brr[i][j];
        }   
    }

    //--------*Logic*--------
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<2;j++){
    //         res[i][j]=arr[i][j]+brr[i][j];
    //     }   
    // }
    

    //cout
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<2;j++){
    //         cout<<res[i][j]<<" ";
    //     }   
    //     cout<<endl;
    // }
 
 
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            arr[i][j]=arr[i][j]+brr[i][j];
        }
    }
    //cout
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<arr[i][j]<<" ";
        }   
        cout<<endl;
    }
 
}