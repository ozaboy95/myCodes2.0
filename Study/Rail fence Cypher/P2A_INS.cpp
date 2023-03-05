#include "bits/stdc++.h"

using namespace std;

string enc(string msg,int rail){
   
    string ans="";
    vector<char> v(msg.size(),'_');
    vector<vector<char>> mat(rail,v);
   
    int i=0,j=0;
    bool flag=false;
    while(j<msg.size()){
        if(i==0)flag=true;
        else if(i==rail-1)flag=false;
        mat[i][j]=msg[j];
        if(flag==true){
            i++;
        }else{
            i--;
        }
        j++;
    }
    
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[i].size();j++){
            if(mat[i][j]!='_'){
                ans+=mat[i][j];
            }
        }
    
    }
    return ans;
}

string dec(string e,int rail){
    string ans="";
    vector<char> v(e.size(),'_');
    vector<vector<char>> mat(rail,v);
    
    int i=0,j=0;
    bool flag=false;
    while(j<e.size()){
        if(i==0)flag=true;
        else if(i==rail-1)flag=false;
        mat[i][j]='*';
        if(flag==true){
            i++;
        }else{
            i--;
        }
        j++;
    }
    int m=0;
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[i].size();j++){
            if(mat[i][j]=='*'){
                mat[i][j]=e[m];
                m++;
            }
        }
    }
    
    i=0,j=0;
    flag=false;
    while(j<e.size()){
        if(i==0)flag=true;
        else if(i==rail-1)flag=false;
        ans+=mat[i][j];
        if(flag==true){
            i++;
        }else{
            i--;
        }
        j++;
    }
    return ans;
}

int main()
{
    cout<<"Enter the msg string :\n";
    string str;
    getline(cin,str);
    cout<<"Encrypted String:\n"<<enc(str,3)<<"\n";
    cout<<"Decrypted String:\n"<<dec(enc(str,3),3);
    return 0;
}