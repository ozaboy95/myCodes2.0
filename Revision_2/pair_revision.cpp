#include <bits/stdc++.h>
using namespace std;

int main()
{ 
  // pair <data_type,data_type> variable_name;
  pair<int,string> p;
  p = make_pair(12,"Harsh");
  cout<<p.first<<" - "<<p.second<<endl;
  
  pair<int,int> p1 = {10,222};
  cout<<p1.first<<" - "<<p1.second<<endl;
  
  
  pair<pair <int,int>,int> p2={{10,20},3};
  
  cout<<p2.first.first<<" , "<<p2.first.second<<" , "<<p2.second<<endl;
  
  // pair ka array
  pair<int,int> p_array[3];
  
  p_array[0] = {1,2};
  p_array[1] = {2,3};
  p_array[2] = {4,5};
  
  // pair ka vector
  vector<pair<string,int>> v1;
  
  // pair ka set
  set<pair<int,int>> s1;

  // iterators in vector 
    
  vector<pair<int,int>> v_p = {{1,2},{3,4},{5,6}};
    
  for(auto it=v_p.begin();it!=v_p.end();it++){
    cout<<(*it).first<<" - "<<(*it).second<<endl;
  }
  cout<<endl;
    
  for(auto it=v_p.begin();it!=v_p.end();it++){
    cout<<(it->first)<<" - "<<(it->second)<<endl;
  }
  cout<<endl;

  return 0;
}