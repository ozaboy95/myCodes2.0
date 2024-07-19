#include <bits/stdc++.h>
using namespace std;

// parameterized way
int fact_Of_N_Numbers(int i,int fact){
  if(i<1){
    return fact;
  }
  return fact_Of_N_Numbers(i-1,fact*i);
}

// fuctional way
int fact_Of_N_Numbers_functional_way(int n){
  if(n==0){
    return 1;
  }
  return n * fact_Of_N_Numbers_functional_way(n-1);
}
int main() {
  int N;
  cin >> N;
  cout<<"Parameterized Way : "<<fact_Of_N_Numbers(N,1)<<endl;
  cout<<"Functional Way : "<<fact_Of_N_Numbers_functional_way(N)<<endl;
  return 0;
}