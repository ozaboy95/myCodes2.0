#include <bits/stdc++.h>
using namespace std;
/*
vector<int> v;

v.push_back(12);            //O(1)
v.pop_back();               //O(1)
vector<int> oza = v;        //O(n)
vector<int> &oza1 = v;

// vector ahiya pass by value (copy) chhe
// O(n)
void func1(vector<int> oza){
...
...
...
}

// vector ahiya pass by reference chhe
void func1(vector<int> &oza){
...
...
... 
}


makes copy of elements
//O(n)
for(auto it:oza){
...
...
...
}

// pass by reference
for(auto &it:oza){
...
...
...
}

*/


int main()
{
    vector<int> v1;
    
    for(int i=0;i<5;i++){
        v1.push_back(i);
    }
    
    // size
    cout<<v1.size()<<endl;
    
    for(auto it=v1.begin();it!=v1.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    for(auto it=v1.end()-1;it>=v1.begin();it--){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    for(auto it=v1.rend()-1;it>=v1.rbegin();it--){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    for(auto it=v1.rbegin();it!=v1.rend();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    v1.push_back(999);
    cout<<"Size of  V1 : "<<v1.size()<<endl;
    // pop last element
    v1.pop_back();
    cout<<"Size of  V1 : "<<v1.size()<<endl;
    //clear vector
    // v1.clear();


    // finding element and deleting
    vector<int> v1 = { 11, 21, 31, 41, 51, 61, 71, 81, 91, 101 };
    
    // will find '71' and delete it
    int elementToBeDeleted = 72;
    auto it = find(v1.begin(),v1.end(),elementToBeDeleted);
    if(it!=v1.end()){
        v1.erase(it);
        cout<<elementToBeDeleted<<" is deleted successfully !!!\n";
    }else{
        cout<<"element is not found\n";
    }

    return 0;
}



/*

0 1 2 3 4 
4 3 2 1 0 
0 1 2 3 4 
4 3 2 1 0 
Size of  V1 : 6
Size of  V1 : 5

*/