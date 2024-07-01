#include <bits/stdc++.h>
using namespace std;

int main()
{
  pair<int,int> p1 = {10,222};
  cout<<p1.first<<" - "<<p1.second<<endl;
  
  
  pair<pair <int,int>,int> p2={{10,20},3};
  
  cout<<p2.first.first<<" , "<<p2.first.second<<" , "<<p2.second<<endl;
  
  
  // pair ka vector
  vector<pair<string,pair>> v1;
  
  // pair ka set
  set<pair<int,int>> s1;
  return 0;
}