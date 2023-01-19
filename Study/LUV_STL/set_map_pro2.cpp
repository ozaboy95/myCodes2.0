//simp
#include <bits/stdc++.h>
using namespace std;


int main() {
    
    //iterators
    //code1
    /*
    vector<int> v={2,3,4,5,6};
    
    vector<int> :: iterator it=v.begin();
    for(it=v.begin();it!=v.end();it++){
        cout<<(*it)<<" ";
    }
    printf("\n");
    */
    //code2
    /*
    vector<pair<int,int>> v1={{1,2},{2,3},{3,4},{4,5}};
    vector<pair<int,int>> :: iterator it=v1.begin();
    for(it=v1.begin();it!=v1.end();++it){
        cout<<(*it).first<<"-"<<(*it).second<<" ";
    }
    printf("\n");
     for(it=v1.begin();it!=v1.end();++it){
        cout<<(it->first)<<"-"<<(it->second)<<" ";
    }
    printf("\n");
    for(auto x:v1){
        cout<<x.first<<"-"<<x.second<<" ";
    }
    */
    
    
    //map
    //code1_map
    /*
    map<int,string> m1;
    //insertion
    //O(logn) each operation
    //n operation hoy to O(nlogn)
    m1[100]="abc";
    m1[20]="def";
    m1[5]="cjos";
    m1[10]="kjaq";
    m1.insert({6,"harshu"});
    
    //traversing
    //O(nlogn)
    for(auto har:m1){
      
        cout<<har.first<<"-"<<har.second<<"\t";
      
    }
    cout<<endl;
    //find 
    //O(logn) for each operation
    auto it1=m1.find(10);
    if(it1==m1.end()){               //jo elementna mde to end() iterator ape
        cout<<"element not found\n";
    }else{
        cout<<it1->first<<"-"<<(*it1).second<<"\n";
    }
    
    //delete
    auto it2=m1.find(5);    //O(logn)
    m1.erase(it2);          //O(1)
    //or
    m1.erase(10);
    
    for(auto har:m1){
      
        cout<<har.first<<"-"<<har.second<<"\t";
      
    }
    cout<<endl;
    
    //m1.clear()  //clear all in map
    */
    //code2_map
    //N strings , print unique strings in lexicographycally order with their frequrmcy
    // input
    /*
        8
        abc
        def
        abc 
        ghj
        jkl
        ghj
        ghj
        abc
    */
    //solu
    /*
    int N;cin>>N;
    map<string,int> m1;
    while(N--){
        string str;cin>>str;
        m1[str]++;
    }
    for(auto x:m1){
        cout<<x.first<<"-"<<x.second<<" ";
    }
    */
    
    
    //set;
    //code1_set
    /*
    set<string> set1;
    
    //insertion
    //O(logn)
    set1.insert("abc");
    set1.insert("def");
    
    
    //find
    //O(logn)
    auto it=set1.find("abc");
    if(it==set1.end()){
        cout<<"NOT FOUND";
    }else{
        cout<<(*it);
    }
    
    */
    
    //Multisets
    //when to strore elements in chadata kram ma 
    //multisets>>priority queue
    multiset<pair<int,int>> mm1;
    mm1.insert({1,25});
    mm1.insert({1,25});
    mm1.insert({2,67});
    mm1.insert({2,67});
    for(auto it:mm1){
        cout<<(it).first<<"-"<<(it).second<<" ";
    }
    
    //delete
    //iterator je pelu hoy ene j delete kare 
    auto it=mm1.find({1,25});
    mm1.erase(it);
    
    for(auto it:mm1){
        cout<<(it).first<<"-"<<(it).second<<" ";
    }
    //direct valu badhu delete kar de
    mm1.erase({2,67});
    for(auto it:mm1){
        cout<<(it).first<<"-"<<(it).second<<" ";
    }
	return 0;
}
