#include <bits/stdc++.h>

using namespace std;

void printMat(vector<vector<char>> v1){
    for(int i=0;i<v1.size();i++){
        for(int j=0;j<v1[i].size();j++){
            cout<<v1[i][j]<<" ";
        }
        cout<<"\n";
    }
    
}
string genkey(int length){
    char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z' };
 
    string res = "";
    for (int i = 0; i < length; ){
        char temp=alphabet[rand() % 26];
        auto it=find(res.begin(),res.end(),temp);
        if(it==res.end()){
            res+=temp;
            i++;
        }
    }
   
    return res;
}

string e1(string msg,string key){
   
    string key_d=key;
    map<char,int> m;
    
    sort(key_d.begin(),key_d.end());
    
    for(int i=0;i<key_d.size();i++){
        m[key_d[i]]=i;
    }
    
    int l=key.size();
    vector<char> v(l,'*');
    vector<vector<char>> mat(l,v);
    
    int key_index=0;
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[i].size();j++){ 
            if(key_index<msg.size()){
                mat[i][j]=msg[key_index];
                if(mat[i][j]==' ')mat[i][j]='_';
                key_index++;
            }
            
        }
    }
    
    string enc="";
    
    map<int,vector<char>> m2;
    
    int col=0;
    for(auto x:key){
        for(int i=0;i<mat.size();i++){
                m2[m[x]].push_back(mat[i][col]);
        }
        col++;
    }
    
    for(auto it:m2){
        // cout<<it.first<<" ";
        
        for(int i=0;i<it.second.size();i++){
            // cout<<it.second[i]<<"-";
            enc+=it.second[i];
        }
        
    }
    return enc;
}

string d1(string enc,string key){
    
    string key_d=key;
    map<char,int> m;
    
    sort(key_d.begin(),key_d.end());
    
    for(int i=0;i<key_d.size();i++){
        m[key[i]]=i;
    }
  
    int l=key.size();
    vector<char> v(l,'*');
    vector<vector<char>> mat(l,v);
    
    
    
    int index=0;
    map<int,vector<char>> m2;
    int col=0;
    while(col<l){
        for(int i=0;i<l;i++){
            mat[i][col]=enc[index];
            index++;
        }
        col++;
    }
 
    
    int ver=0;
    for(auto c:key_d){
        for(int i=0;i<l;i++){
            m2[m[c]].push_back(mat[i][ver]);
        }
        ver++;
    }
    string ans="";
    int col2=0;
    for(auto it:m2){
        for(int i=0;i<it.second.size();i++){
            mat[i][col2]=it.second[i];
           
        }
        col2++;
    }
    
   
    
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[i].size();j++){
            if(mat[i][j]=='_'||mat[i][j]=='*')mat[i][j]=' ';
            ans+=mat[i][j];
        }
       
    }
    
    
    return ans;
}

int main(){   
    srand(time(NULL));
    cout<<"|-----------------------------------|\n";
    cout<<"|-------------INS Practical2--------|\n";
    cout<<"|--------------Aditi Rathod----------|\n";
    cout<<"|-----------------20BCE242----------|\n";
    cout<<"|-----------------------------------|\n\n";
    cout<<"Enter the msg : \n";
    string str;getline(cin,str);
    int s=ceil(sqrt(str.size()));
    string ran_key=genkey(s);
    // string test1="bcad";
    cout<<"\nEncrypted string : ->> "<<e1(str,ran_key)<<endl;
    cout<<"\nDecrypted string : ->> "<<d1(e1(str,ran_key),ran_key);
    return 0;
}