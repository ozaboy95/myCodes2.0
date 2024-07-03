#include <bits/stdc++.h>
using namespace std;

int main()
{
  //QUEUE
  queue<int> q;
  
  q.push(10);
  q.push(31);
  q.push(51);
  q.push(45);
  q.push(26);
  
  
  cout<<q.front()<<endl;
  q.pop();
  cout<<q.front()<<endl;
  
  //PRIORITY QUEUE
  //utarata kram ma gothave
  
  priority_queue<int> pq;
  
  pq.push(101);
  pq.push(3000);
  pq.push(340);
  pq.push(233);
  pq.push(5000);
  
  cout<<pq.top()<<endl;
  
  

    return 0;
}