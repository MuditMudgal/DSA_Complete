#include<iostream>
using namespace std;

char toLowerCase(char name[],int len){
    char ch[];
    for(int i=0;i<len;i++){
        int x = (int)name[i];
        x = x+32;
        ch = (char)x;
    }

}

bool checkPalindrome(char name[],int len){
    int i=0;
    int j=len-1;
    bool flag = 0;
    while(i<j){
        if(name[i]==name[j]){
            i++;
            j--;
            flag=1;
        }
        else {
            flag=0;
            break;
        }
    }
    return flag;
}

void reverse(char name[], int count){
    int i = 0;
    int j = count-1;
    while(i<j){
        //swap
        char temp = name[i];
        name[i] = name[j];
        name[j] = temp;
        i++;
        j--;
    }
}


int getLength(char name[]){
    int count = 0;
    for(int i=0;name[i]!=0;i++){
        count++;
    }
    return count;
}


int main(){

    char name[20];
    cin>>name;

    //cout<<getLength(name);
    
    int len = getLength(name);
    reverse(name,len);
    //cout<<name<<endl;

    //cout<<"Palindrome status : "<<checkPalindrome(name,len);

    cout<<toLowerCase(name,len);


}