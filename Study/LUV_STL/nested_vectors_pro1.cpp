/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include "bits/stdc++.h"

using namespace std;

int main()
{
    cout<<"Hello World"<<endl;
    
    //Nesting
    //code-1
    /*
    vector <pair<int,int>> v={{1,2},{2,3},{3,4}};
    int a,b;

    for(int i=0;i<3;i++){
        cin>>a>>b;
        v.push_back({a,b});
    }
    
    for(auto x:v){
        cout<<x.first<<"-"<<x.second<<" ";
    }
    cout<<endl;
    */
    
    //code-2
    //Array of vector
    
    /*
        5
        1 2 3 4 5
        3 
        10 11 12 
        2 
        45 56 
        2 
        21 31 
        1 
        80 
    */
    /*
    vector<int> oza[5];
    int n,x;
    for(int i=0;i<5;i++){
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>x;
            oza[i].push_back(x);
        }
    }
    for(int i=0;i<5;i++){
        cout<<oza[i].size()<<endl;
        for(int j=0;j<oza[i].size();j++){
            cout<<oza[i][j]<<" ";
        }
        cout<<endl;
    }
    */
    
    //vector of vector
    vector<vector<int>> oza;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int m;cin>>m;
        int x;
        vector<int> temp;
        for(int j=0;j<m;j++){
            cin>>x;
            temp.push_back(x);
        }
        oza.push_back(temp);
    }
    
    for(int i=0;i<5;i++){
        cout<<oza[i].size()<<endl;
        for(int j=0;j<oza[i].size();j++){
            cout<<oza[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}