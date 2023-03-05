
#include "bits/stdc++.h"
using namespace std;

string str1="abcdefghijklmnopqrstuvwxyz";
string str2="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
map<char,char> enc_m1,enc_m2,dec_m1,dec_m2;

string enc(string msg){
    string ans="";
    for(int i=0;i<msg.size();i++){
        
        
        if(msg[i]==' '){
            ans+=' ';
        }else{
            if(isupper(msg[i])){
                ans+=enc_m2[msg[i]];
            }else{
                ans+=enc_m1[msg[i]];
            }
        }
    }
 return ans;   
}

string dec(string msg){
    string ans="";
    for(int i=0;i<msg.size();i++){
        
        
        if(msg[i]==' '){
            ans+=' ';
        }else{
            if(isupper(msg[i])){
                ans+=dec_m2[msg[i]];
            }else{
                ans+=dec_m1[msg[i]];
            }
        }
    }
 return ans;   
}




int main()
{
    //mapping 
    // a b c d 
    // n o p q
    for(int i=0;i<str1.size();i++){
        enc_m1[str1[i]]=str1[(i+13)%26];
    }
    //mapping
    // n o p q
    // a b c d
    for(auto x:enc_m1){
        dec_m1[x.second]=x.first;
    }
    // A B C D
    // N O P Q
    for(int i=0;i<str2.size();i++){
        enc_m2[str1[i]]=str1[(i+13)%26];
    }
    // N O P Q
    // A B C D
    for(auto x:enc_m2){
        dec_m2[x.second]=x.first;
    }
    
    cout<<"-------------INS_Prac1------------------\n";
    cout<<"-----------ADITI RATHOD-----------------\n";
    cout<<"-------------20BCE242-------------------\n";
    cout<<"Enter the msg string\n";
    string m;
    getline(cin,m);
    
    cout<<"Encrypted string: \n"<<enc(m)<<"\n";
    string enc_string=enc(m);
    cout<<"Decrypted string: \n"<<dec(enc_string)<<"\n";
    
    
    
    //time complexicity
    //enc and dec
    //n*nlogn
    return 0;
}