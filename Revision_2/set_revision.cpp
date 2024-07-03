#include <bits/stdc++.h>
using namespace std;

int main()
{
    //  set 
    set<int> s1;
    
    // to insert element
    s1.insert(100);
    s1.insert(24);
    s1.insert(35);
    s1.insert(50);
    
    
    // to print set
    for(auto it : s1){
        cout<<it<<" ";
    }
    cout<<endl;
    //or
    for(auto it=s1.begin();it!=s1.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    // find element
    auto it = s1.find(24);
    
    if(it!=s1.end()){
        cout<<"Element is found : "<<*it<<endl;
    }else{
        cout<<"Element is not found !!!"<<endl;
    }
    
    // size of set
    cout<<"Size of the set : "<<s1.size()<<endl;
    
    // to count frequency of Element
    cout<<s1.count(24)<<endl;

    // to delete element from set
    s1.erase(24);
    
    
    // unordered set
    unordered_set<int> uns1;
    
    uns1.insert(100);
    uns1.insert(101);
    uns1.insert(50);
    uns1.insert(25);
    uns1.insert(2000);
    
    for(auto it:uns1){
        cout<<it<<" ";
    }
    cout<<endl;
    
    // find element
    auto it1 = uns1.find(101);
    
    if(it1!=uns1.end()){
        cout<<"Element is found : "<<*it1<<endl;
    }else{
        cout<<"Element is not found !!!"<<endl;
    }
    

    // multiset

    multiset<int> s1;
    s1.insert(10);
    s1.insert(21);
    s1.insert(21);
    s1.insert(10);
    
    for(auto it:s1){
        cout<<it<<" ";
    }
    return 0;
}

/*

24 35 50 100 
24 35 50 100 
Element is found : 24
Size of the set : 4
1
25 2000 50 101 100 
Element is found : 101

*/