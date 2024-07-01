#include <bits/stdc++.h>
using namespace std;

int main()
{
  stack<int> st1;
  
  //insert element
  st1.push(21);
  st1.push(23);
  st1.push(25);
  st1.push(45);
  st1.push(1000);
  
  // top 
  cout<<st1.top()<<endl;
  
  //delete last element
  st1.pop();
  cout<<st1.top()<<endl;
  
  bool flag = st1.empty();
  while(!flag){
    st1.pop();
  }

  //stack size
  cout<<st1.size()<<endl;
  
  return 0;
}