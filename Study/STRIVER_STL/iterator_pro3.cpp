/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include "bits/stdc++.h"

using namespace std;

//iterators

int main()
{
    cout<<"Hello World"<<endl;
    
    array <int,5> harshu={1,5,7,8,4};
    
    //  X     1     5  7  8     9      X
    // rend  begin          rebegin   end
   
    for(auto it=harshu.begin();it!=harshu.end();it++){
        cout<<*it<<" ";
    }
    printf("\n");
    for(auto it=harshu.rbegin();it!=harshu.rend();it++){
        cout<<*it<<" ";
    }
    printf("\n");
    for(auto it=harshu.end()-1;it>=harshu.begin();it--){
        cout<<*it<<" ";
    }
    printf("\n");
    
    
    //fasam fas way
    for(auto it:harshu){
        cout<<it<<" ";
    }
    return 0;
}