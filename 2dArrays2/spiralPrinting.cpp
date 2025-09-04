#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter rows : ";
    cin>>m;
    int n;
    cout<<"Enter cols : ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter matrix : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    
    //spiral
    int minr=0 ,maxr=m-1;
    int minc=0 , maxc=n-1;

    while(minr<=maxr or minc<=maxc){
        //right
        for(int j=minc;j<=maxc;j++){
            cout<<arr[minr][j]<<" ";
        }
        minr++;
        if(minr>maxr || minc>maxc)  break;
        //down
        for(int i=minr;i<=maxr;i++){
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;
        if(minr>maxr || minc>maxc)  break;
        //left
        for(int j=maxc;j>=minc;j--){
            cout<<arr[maxr][j]<<" ";
        }
        maxr--;
        if(minr>maxr || minc>maxc)  break;
        //top/up
        for(int i=maxr;i>=minr;i--){
            cout<<arr[i][minc]<<" ";
        }
        minc++;
        if(minr>maxr || minc>maxc)  break;
    }
    // 1 2 3 4 8 12 11 10 9 5 6 7
}