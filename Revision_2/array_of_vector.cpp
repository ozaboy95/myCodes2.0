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
    // array of vector
    
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
    
    int L;cin>>L;
    vector<int> V[L];
    for(int i=0;i<L;i++){
      int n;cin>>n;
      for(int j=0;j<n;j++){
        int x;cin>>x;
        V[i].push_back(x);
      }
    } 
    
    
    // printing array of vector
    
    for(int i = 0;i < L;i++){
      for(int j=0;j<V[i].size();j++){
        cout<<V[i][j]<<" ";
      }
      cout<<endl;
    }
    
    
    

    return 0;
}