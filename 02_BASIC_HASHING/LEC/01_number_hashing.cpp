
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int N;cin>>N;
   int arr[N];
   for(int i=0;i<N;i++){
     cin>>arr[i];
   }
   
   // pre computation
   // inside main max array size - > 10^6
   int hash[1000000]={0};
   
   for(int i=0;i<N;i++){
     hash[arr[i]]++;
   }
   
   int Q;cin>>Q;
   cout<<"Answer:"<<endl;
   while(Q--){
     cout<<"Enter number:"<<endl;
     int number;
     cin>>number;
     // fteching
     cout<<"Freq of "<<number<<" is "<<hash[number]<<endl;
   }
   
    return 0;
}


/*

5
1 2 2 3 3
5
Answer:
Enter number:
1
Freq of 1 is 1
Enter number:
2
Freq of 2 is 2
Enter number:
3
Freq of 3 is 2
Enter number:
4
Freq of 4 is 0
Enter number:
5
Freq of 5 is 0


*/