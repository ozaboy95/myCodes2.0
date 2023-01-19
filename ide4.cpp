#include "bits/stdc++.h"
using namespace std;

int main() {
	   vector<pair<int,pair<int,int>>> oza;
	   int n;cin>>n;
	   for(int i=0;i<n;i++){
	       int a,b,c;cin>>a>>b>>c;
	       oza.push_back({a,{b,c}});
	   }
	   sort(oza.begin(),oza.end());
	    for(int i=0;i<n;i++){
	       cout<<oza[i].first<<" "<<oza[i].second.first<<" "<<oza[i].second.second<<endl;

	   }
	return 0;   
	
}