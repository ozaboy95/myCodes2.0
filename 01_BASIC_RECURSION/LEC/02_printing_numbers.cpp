// 1. print 1 to N
// 2. print N to 1
// 3. print 1 to N using backtracking 
// 4. print N to 1 using backtracking

#include <bits/stdc++.h>
using namespace std;

void printing1ToN(int i,int n){
  if(i>n){
    return;
  }
  cout<<i<<" ";
  printing1ToN(i+1,n);
}

void printing1ToN_Backtracking(int i,int n){
  if(i<1){
    return;
  }
  printing1ToN_Backtracking(i-1,n);
  cout<<i<<" ";
}

void printingNto1(int i,int n){
  if(i<1){
    return;
  }
  cout<<i<<" ";
  printingNto1(i-1,n);
}

void printingNto1_Backtracking(int i,int n){
  if(i>n){
    return;
  }  
  printingNto1_Backtracking(i+1,n);
  cout<<i<<" ";
}

int main() {
  int N;
  cin >> N;
  printing1ToN(1, N);
  cout<<endl;
  printing1ToN_Backtracking(N,N);
  cout<<endl;
  printingNto1(N,N);
  cout<<endl;
  printingNto1_Backtracking(1,N);
  return 0;
}