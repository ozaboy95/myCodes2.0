//simp
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;cin>>n>>k;
    multiset<long long int> s;
    for(int i=0;i<n;i++){
        long long int t;cin>>t;
        s.insert(t);
    }
    long long int ans=0;
    while(k--){
        auto it=s.end();
        it--;
        long long int max_count=*it;
        // cout<<*it<<" ";
        ans+=max_count;
        s.erase(it);
        s.insert(max_count/2);
    }
    cout<<endl<<ans<<endl;
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
