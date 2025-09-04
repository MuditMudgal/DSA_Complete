#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter rows : ";
    cin>>m;
    cout<<"enter coloumns : ";
    cin>>n;

    int arr[m][n];
    //cin
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    //cout
    for(int i=0;i<m;i++){        //rows
        for(int j=0;j<n;j++){       //col
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //printing transpose
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}