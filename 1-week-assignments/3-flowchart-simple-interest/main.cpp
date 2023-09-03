#include <bits/stdc++.h>
using namespace std;

int main() {
  int principal, time, rate;
  cin >> principal >> time >> rate;
  cout << ((principal * time * rate) / (float)100) << endl;
  return 0;
}