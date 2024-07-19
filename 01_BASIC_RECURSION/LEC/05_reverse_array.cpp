#include <bits/stdc++.h>
using namespace std;

// extra array 
// Time : O(n)
// Space: O(n)

void revArr1(vector<int> &arr){
  vector<int> ans;
  for(int i=arr.size()-1;i>=0;i--){
    ans.push_back(arr[i]);
  }
  cout<<"reveresed array : "<<endl;
  for(auto it:ans){
    cout<<it<<" ";
  }
  cout<<endl;
}

// two pointer approach
// Time  : O(n)
// Space : O(1)

void revArr2(vector<int> &arr){
  int left = 0;
  int right = arr.size()-1;
  while(left<right){
    swap(arr[left],arr[right]);
    left++;
    right--;
  }
  
  for(auto it:arr){
    cout<<it<<" ";
  }
  cout<<endl;
}

// One pointer approach
// Time  : O(n)
// Space : O(1)

void revArr3(vector<int> &arr){
  for(int i=0;i<=arr.size()/2;i++){
    swap(arr[i],arr[arr.size()-1-i]);
  }
  for(auto it:arr){
    cout<<it<<" ";
  }
  cout<<endl;
}

// Recursive approach
// Time  : O(n)
// Space : O(1)

void revArr4(int i,vector<int> &arr){
  if(i>=arr.size()/2){
    return;
  }
  swap(arr[i],arr[arr.size()-1-i]);
  revArr4(i+1,arr);
}

int main()
{
  vector<int> qxn = {1,2,3,4,5};
  revArr1(qxn);
  vector<int> qxn1 = {6,7,8,9,10};
  revArr2(qxn1);
  vector<int> qxn2 = {16,17,18,19,20};
  revArr3(qxn2);
  vector<int> qxn3 = {26,27,28,29,30};
  revArr4(0,qxn3);
  for(auto it:qxn3){
    cout<<it<<" ";
  }
  return 0;
}