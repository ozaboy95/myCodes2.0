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
  /*
  
  int    -> 16 bits
  char   -> 8 bits
  bitset -> 1 bit
  
  */
  
  bitset<5> bt;     // by default initialize with all zero 
                    // 0 0 0 0 0 
  
  bitset<5> bt1(4); // 0 0 1 0 0
  bitset<5> bt2(5); // 0 0 1 0 1 
  bitset<5> bt3(7); // 0 0 1 1 1
  
  
  bitset<5> bta1(string("11111"));
  bitset<5> bta2(string("00010"));
  bitset<5> bta3(string("00000"));
  
  // all 
  // badha '1' hoy to true('1') ape baki false('0')
  cout<<"all"<<endl;
  cout<<bta1.all()<<endl;
  cout<<bta2.all()<<endl;
  
  // any 
  // koi ek '1' hot to true('1') ape baki false('0')
  cout<<"any"<<endl;
  cout<<bta1.any()<<endl;
  cout<<bta2.any()<<endl;
  

  // flip
  // '1' -> '0'  banave
  // '0' -> '1'  banave
  cout<<"flip"<<endl;
  bitset<5> bta4(string("10101"));
  cout<<bta4.flip()<<endl;
  bitset<5> bta5(string("01011"));
  cout<<bta5.flip(1)<<endl;  // last thi '1' index ni bit ne flip kare
  cout<<bta5.flip(3)<<endl;  // last thi '3' index ni bit ne flip kare
  
  // set
  // badhi bits 1 kari nakhe
  // 16 8 4 2 1 
  // 0  0 1 1 0
  cout<<"set"<<endl;
  bitset<5> bone1(6); 
  cout<<bone1.set()<<endl;
  
  
  // reset
  // badhi bits ne 0 kari nakhe 
 cout<<bone1.reset()<<endl;
 return 0;
}