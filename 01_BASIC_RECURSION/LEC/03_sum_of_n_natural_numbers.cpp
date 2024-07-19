#include <bits/stdc++.h>
using namespace std;

// parameterized way
int sum_Of_N_Numbers(int i,int sum){
  if(i<1){
    return sum;
  }
  return sum_Of_N_Numbers(i-1,sum+i);
}

// fuctional way
int sum_Of_N_Numbers_functional_way(int n){
  if(n==0){
    return 0;
  }
  return n + sum_Of_N_Numbers_functional_way(n-1);
}
int main() {
  int N;
  cin >> N;
  cout<<"Parameterized Way : "<<sum_Of_N_Numbers(N,0)<<endl;
  cout<<"Functional Way : "<<sum_Of_N_Numbers_functional_way(N)<<endl;
  return 0;
}