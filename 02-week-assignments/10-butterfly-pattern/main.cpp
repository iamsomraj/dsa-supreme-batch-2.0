#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int fn = (n + 1) / 2;
  int sn = n - fn;
  if (sn == fn) {
    sn = sn - 1;
  }
  for (int i = 0; i < fn; i++) {
    for (int j = 0; j <= i; j++) {
      cout << " * ";
    }
    for (int j = 0; j < 2 * (fn - i) - 2; j++) {
      cout << "   ";
    }
    for (int j = 0; j <= i; j++) {
      cout << " * ";
    }
    cout << endl;
  }
  for (int i = 0; i <= sn; i++) {
    for (int j = 0; j < (sn - i) + 1; j++) {
      cout << " * ";
    }
    for (int j = 0; j < 2 * i; j++) {
      cout << "   ";
    }
    for (int j = 0; j < (sn - i) + 1; j++) {
      cout << " * ";
    }
    cout << endl;
  }

  return 0;
}
