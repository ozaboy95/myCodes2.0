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
    cout<<"---------------BITSET--------"<<endl;
    //stroes only  or 0
    //faster than any data type array
    //used in segment tree problems
    
    //initialization
    
    bitset <5> bt;
    cin>>bt;
    bitset <5> bt1;   //by default initialization with zero(0)
    bitset <5> bt2(6);// 6 in binary (5 bit ma)(16 8 4 2 1)
                      //                        0  0 1 1 0
  
    bitset <5> bt3(string("11010"));
    
    cout<<bt<<" "<<bt1<<" "<<bt2<<" "<<bt3<<endl;
    
    
    //all()
    //badha bits 1 hoy to true ape 
    
    bitset <6> bt4(string("111111"));
    bitset <6> bt5(string("100100"));
    
    cout<<"--------all()----------"<<endl;
    cout<<"all()  : "<<bt4.all()<<" "<<bt5.all()<<endl;
    
    
    //any()
    //koi ek bit pan 1 hoy to true ape
    
    bitset <6> bt6(string("001010"));
    bitset <6> bt7(string("000000"));
    
    cout<<"--------any()----------"<<endl;
    cout<<"any()  : "<<bt6.any()<<" "<<bt7.any()<<endl;
    
    
    //count()
    //prints the no of '1' bits (set bits)
    
    cout<<"------count()----------"<<endl;
    cout<<"count()  : "<<bt4.count()<<" "<<bt5.count()<<endl;
    
    //flip()
    // 0-->1 or 1-->0
    //bitset ma index start from right to left
    
    bitset<4> bt8(15);
    
    cout<<"-------flip()----------"<<endl;
    cout<<"original bits--> "<<bt8<<endl;
    cout<<"flip 1st index-> "<<bt8.flip(1)<<endl;
    cout<<"flip 3rd index-> "<<bt8.flip(3)<<endl;
    
    
    //none()
    //badha zero hoy tyre true ape
    
    bitset <3> bt9(0);  //000
    bitset <3> bt10(2); //010 
    
    cout<<"-------none()----------"<<endl;
    cout<<"none() : "<<bt9.none()<<" "<<bt10.none()<<endl;
    
    //set()                             // reset()
    //akhu 1 thi set thay               // 0 thi thay
    //set(index)                        //reset(index)
    // je te index ma 1 thi set thay    // 0
    //set(index,0)                      //reset(index,1)
    // je te index ma 0 thi set thay    //1
    
    bitset <7> bt11;
    bt11.set();
    cout<<"-------set()----------"<<endl;
    cout<<"set()--> : "<<bt11<<endl;
    bt11.reset();
    cout<<"reset()--> : "<<bt11<<endl;
    bt11.set(3);
    bt11.set(2);
    bt11.set(1);
    cout<<"set(index)--> : "<<bt11<<endl;
    bt11.set(2,0);
    cout<<"set(index=2,0)--> : "<<bt11<<endl;
    bt11.reset(2);
    cout<<"reset(index)--> : "<<bt11<<endl;
    
    
    //size()
    cout<<"------size()----------"<<endl;
    cout<<"size of bt11 :"<<bt11.size()<<endl;
    
    //test()
    cout<<"bt11 :"<<bt11<<endl;
    cout<<"testing at index 2nd :"<<bt11.test(2)<<endl;
    cout<<"testing at index 1nd :"<<bt11.test(1)<<endl;
    
    
    return 0;
}