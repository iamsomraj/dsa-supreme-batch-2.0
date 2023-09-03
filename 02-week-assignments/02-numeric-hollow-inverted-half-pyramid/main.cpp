#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int row = i;
    for (int j = 0; j < n - i; j++) {
      if (i == 0 || i == n - 1 || j == 0 || j == n - i - 1) {
        cout << " " << row + 1 << " ";
      } else {
        cout << "   ";
      }
      row++;
    }
    cout << endl;
  }
  return 0;
}
