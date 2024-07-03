
#include <bits/stdc++.h>
using namespace std;

bool customComp(int a,int b){
  if(a>=b){
    return true;
  }else{
    return false;
  }
}

bool customComp1(pair<int,int> p1,pair<int,int> p2){
  if(p1.first<p2.first){
    return true;
  }
  if(p1.first == p2.first){
    if(p1.second>p2.second){
      return true;
    }
  }
  return false;
}

int main()
{
    int K = 5;
    int arr[K] = {110,12,45,89,78};
    
    // sort(arr,arr+K); // default chadata kram ma gothave chhe
    sort(arr,arr+K,customComp); // utarata kram ma gothavava mate
    
    for(int i=0;i<K;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
    pair<int,int> brr[5] = {{1,4},{2,7},{9,2},{9,7},{2,4}};
    // Question : 
    // Sort pair like first element sort in ascending order and jo first element same hoy to second element na desc order ma sort karavana
    sort(brr,brr+5,customComp1);
    
    for(auto it:brr){
      cout<<it.first<<","<<it.second<<endl;
    }
    return 0;
}