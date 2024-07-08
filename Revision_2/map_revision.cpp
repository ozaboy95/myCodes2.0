#include <bits/stdc++.h>
using namespace std;

int main()
{   
   // map
   // sorting order + unique key
   // inbuilt implementation -> red-black tree
   // insert                O(nlogn)
   // printing              O(nlogn)
   // finding one element   O(logn)
   
   map<string,int> m1;
   m1["harsh"]=1;
   m1["dinesh"]=2;
   m1["manish"]=200;
   m1["suresh"]=450;
   m1["harsh"]=98;
   m1.emplace("shreeram",3378);
   m1.insert({"harshoza",95});
   
   for(auto it:m1){
       cout<<it.first<<" - "<<it.second<<endl;
   }
   cout<<"\n";
   
   //to delete one key-value pair 
   m1.erase("suresh");
   for(auto it:m1){
       cout<<it.first<<" - "<<it.second<<endl;
   }
   cout<<"\n";

   //finding key-value pair by key
   auto it = m1.find("harsh"); // find return iterator 
   if(it==m1.end()){
     cout<<"Not found"<<endl;
   }else{
     cout<<"Element found\n";
     cout<<it->first<<" "<<it->second<<endl;
   }
   
   
   // unordered map
   // no sorting + unique key
   // inbuilt implementation -> hash table 
   // insertion   -> O(1) 
   // deletion    -> O(1) 
   // find        -> O(1)
   // erase       -> O(1)
   
   unordered_map<int,int> unordered_m1;
   unordered_m1[10]=100;
   unordered_m1[40]=400;
   unordered_m1[30]=300;
   unordered_m1[20]=200;
   
   for(auto it:unordered_m1){
       cout<<it.first<<"-"<<it.second<<endl;
   }
   
   
   //multimap
   //sorting order + multiple key
   // we can store duplicate key / key unique na hoy
   multimap<string,int> multimap_m1;
   multimap_m1.insert({"one",111});
   multimap_m1.insert({"two",234});
   multimap_m1.insert({"one",555});
   multimap_m1.insert({"two",666});
   multimap_m1.insert({"three",7890});

   for(auto it:multimap_m1){
       cout<<it.first<<"-"<<it.second<<endl;
   }
   return 0;
}