#include<iostream>
using namespace std;
void display(int a[],int size){    // 'a' is pointer  or int* a;
    for(int i=0;i<=size-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int b[],int size){    // 'b' is pointer  or int* b;
    b[0]=100;
    return;
}
int main(){
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);

    display(arr,size);
    change(arr,size);
    display(arr,size);
 
 
}