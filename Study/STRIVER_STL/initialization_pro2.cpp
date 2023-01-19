/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include "bits/stdc++.h"

using namespace std;

array <int ,10> adi; //Globally initialize na kariye to zero thi thay 

int main()
{
    cout<<"Hello World"<<endl;
    
    array <int,10> oza; //main ni ander initialize na kariye to garbage value le
    
    for(auto x:adi){
        cout<<x<<" ";
    }
    cout<<endl;
    for(auto y:oza){
        cout<<y<<" ";
    }
    cout<<endl;
    
    //bakina elements zero thi intialize thayi jay
    array <int , 5> adirsh={1,2};
    for(auto z:adirsh){
        cout<<z<<" ";
    }
    cout<<endl;
   
    //fill
    array <char,5> strom;
    strom.fill('$');
    for(auto c:strom){
        cout<<c<<" ";

    }
    cout<<endl;
    
    //indexing container_name.at(index)
    for(int i=0;i<strom.size();i++){
        cout<<strom.at(i)<<" ";
    }
   
    
    return 0;
}