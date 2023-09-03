#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      cout << i << " is a even number in the range from 1 to " << n << endl;
    }
  }
  return 0;
}