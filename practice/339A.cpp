#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    string temp="";
    for(int i=0;i<str.length();i++){
        char c=str[i];
        if(str[i]!='+'){
        temp+=c;
    }
    }
    // cout<<temp<<endl;
    int len=temp.length();
    int a[len];
    for(int i=0;i<len;i++){
        a[i]=(int)temp[i];
    }
    sort(a,a+len);
    for(int i=0;i<len;i++){
        cout<<a[i];
    }

    if(len>1){
        for(int i=0,j=0;i<len,j<str.length();i++,j+2){
            str[j]=(char)a[i];
            str[j+1]='+';
        }
        for(int i=0;i<str.length();i++){
        cout<<str[i];
    }
    }
    else
    cout<<a[0];
}
