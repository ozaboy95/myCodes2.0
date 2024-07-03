#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Hello World\n";
    
    // sorting
    
    int m = 5;
    int arr[m] = {1000,200,800,100,700};
    sort(arr,arr+m); // O(nlogn)
    
    for(int i=0;i<m;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
    vector<int> v1 = {1000,200,800,100,700};
    sort(v1.begin(),v1.end());  // O(nlogn)
    for(auto it:v1){
      cout<<it<<" ";
    }
    cout<<endl;
    
    // reverse
    
    reverse(arr,arr+m); // O(n)
    for(int i=0;i<m;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    reverse(v1.begin(),v1.end()); // O(n)
    for(auto it:v1){
      cout<<it<<" ";
    }
    cout<<endl;
    
    // binary search
    // sorted array ma j kam kare
    // O(logn)
    
    cout<<"binary search"<<endl;
    int M = 5;
    int binaryArr[M] = {2,12,34,56,78};
    bool resArr = binary_search(binaryArr,binaryArr+M,34);
    cout<<resArr<<endl;
    bool resArr1 = binary_search(binaryArr,binaryArr+M,44);
    cout<<resArr1<<endl;
    
    return 0;
}