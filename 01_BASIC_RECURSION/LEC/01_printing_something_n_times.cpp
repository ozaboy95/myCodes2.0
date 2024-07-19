// Printing something N times:

#include <bits/stdc++.h>

using namespace std;

void printingSomethingNTimes(int i, int n) {
  if (i > n) {
    return;
  }
  cout << "Harsh Oza : " << i << endl;
  printingSomethingNTimes(i + 1, n);
}
int main() {
  int N;
  cin >> N;
  printingSomethingNTimes(1, N);
  return 0;
}