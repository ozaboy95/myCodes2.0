
#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str = " my name is harsh oza and this ismy string";
  
  // pre computation
  int hash[256] = {0};
  
  // ahiya badha charcters biji abcd ma chhe
  for(int i=0;i<str.size();i++){
    hash[str[i]-'a']++;
  }
  
  int Q;
  cin>>Q;
  while(Q--){
    cout<<"Enter charcter :"<<endl;
    char oza;cin>>oza;
    cout<<"freq of "<<oza<<" is "<<hash[oza-'a']<<endl;
  }
  return 0;
}


/*

5
Enter charcter :
a
freq of a is 4
Enter charcter :
o
freq of o is 1
Enter charcter :
h
freq of h is 3
Enter charcter :
s
freq of s is 5
Enter charcter :
d
freq of d is 1

*/