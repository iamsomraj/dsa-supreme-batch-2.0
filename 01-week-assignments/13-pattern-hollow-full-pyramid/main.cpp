#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    // space - 1st part
    for (int j = 0; j < n - i; j++) {
      cout << "   ";
    }
    // star - 2nd part
    for (int j = 0; j < 2 * i + 1; j++) {
      if (i == 0 || i == n - 1 || j == 0 || j == 2 * i) {
        cout << " * ";
      } else {
        cout << "   ";
      }
    }
    cout << endl;
  }
  return 0;
}