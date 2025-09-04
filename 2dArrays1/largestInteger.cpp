#include<iostream>
using namespace std;
int main(){
    
    int m,n;
    cout<<"Enter m : ";
    cin>>m;
    cout<<"Enter n : ";
    cin>>n;

    int arr[m][n];
    //cin
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }   
    }

    //biggest
    int max=-1;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }   
    }
    cout<<max;
 
 
 
}