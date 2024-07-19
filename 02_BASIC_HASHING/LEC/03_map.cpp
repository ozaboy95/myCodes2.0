/******************************************************************************

unordered_map -> storing and fetching -> for avg and best case -> O(1)
                                      -> for worst case        -> O(n)
                                      
map           -> storing and fetching -> for all cases         -> O(logn)

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
  
  // int arr[10] = {10,11,2,3,5,6,7,2,10,10};
  int N;cin>>N;
  int arr[N];
  // pre compuatation
  map<int,int> m1;
  for(int i=0;i<10;i++){
    cin>>arr[i];
    m1[arr[i]]++;// for each opeartion O(logn)
  }
  // all loop time complexcity -> O(nlogn)
  
  int Q;cin>>Q;
  while(Q--){
    int n;cin>>n;
    cout<<"Freq of "<<n<<" is "<<m1[n]<<endl;
  }
  return 0;
}