/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector of vector
    
    /*
      i/p
      3
      3 
      1 2 3 
      3 
      4 5 6 
      2 
      1 2 
      
    */
    
    vector<vector<int>> V;
    int N;cin>>N;
    
    while(N--){
      int n;cin>>n;
      vector<int> tempVec;
      for(int i=0;i<n;i++){
        int x;cin>>x;
        tempVec.push_back(x);
      }
      V.push_back(tempVec);
    }
    
    // printing vector of vector
    for(int i=0;i<V.size();i++){
      cout<<"Index : "<<i<<" - "<<V[i].size()<<endl;
      for(int j=0;j<V[i].size();j++){
        cout<<V[i][j]<<" ";
      }
      cout<<endl;
    }    
    
    


    return 0;
}