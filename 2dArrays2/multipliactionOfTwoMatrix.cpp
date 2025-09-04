#include<iostream>
using namespace std;
int main(){
    
    int n,m,p,q;
    cout<<"Enter a rows : ";
    cin>>n;
    cout<<"Enter a cols : ";
    cin>>m;
    cout<<"Enter b rows : ";
    cin>>p;
    cout<<"Enter b cols : ";
    cin>>q;

    if(m==p){
        int a[n][m];
        //cin for a[][]
        cout<<"Enter 1st matrix : "<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];       
            }
        }
        //cin for b[][]
        cout<<"Enter 2nd matrix : "<<endl;
        int b[p][q];
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];       
            }
        }
        cout<<endl;

        //resultant matrix
        int res[n][q];

        //res[i][j] = a[i][0]*b[0][j] + a[i][1]*b[1][j] + ... till common number - 1 (m-1);
        for(int i=0;i<n;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                for(int r=0;r<m;r++){
                res[i][j]+=a[i][r]*b[r][j];
                }
            }
        }
    
        //cout printing
        for(int i=0;i<n;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
        


    }
    else{  //(m!=p)
        cout<<"Incorrect matrix size"<<endl;
    }    
 
}