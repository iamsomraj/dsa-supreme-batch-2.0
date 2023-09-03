#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int fn = (n + 1) / 2;
  int sn = n - fn;
  if (sn == fn) {
    sn -= 1;
  }
  for (int i = 0; i < fn; i++) {
    int start = 1;
    for (int j = 0; j < 2 * i + 1; j++) {
      if (i == 0 || i == fn || j == 0 || j == 2 * i) {
        cout << " * ";
      } else {
        if (j < i) {
          cout << " " << start++ << " ";
        } else {
          cout << " " << start-- << " ";
        }
      }
    }
    cout << endl;
  }
  for (int i = 0; i < sn; i++) {
    int start = 1;
    for (int j = 0; j < 2 * (sn - i) - 1; j++) {
      if (j == 0 || j == 2 * (sn - i) - 2) {
        cout << " * ";
      } else {
        if (j < (sn - i) - 1) {
          cout << " " << start++ << " ";
        } else {
          cout << " " << start-- << " ";
        }
      }
    }
    cout << endl;
  }
  return 0;
}
