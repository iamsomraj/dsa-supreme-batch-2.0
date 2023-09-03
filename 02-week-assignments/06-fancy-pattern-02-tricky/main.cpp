#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int start = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 2 * i + 1; j++) {
      if (j % 2 == 0) {
        cout << " " << start++ << " ";
      } else {
        cout << " * ";
      }
    }
    cout << endl;
  }
  for (int i = 0; i < n; i++) {
    int rowStart = start - (n - i); // calculation of rowStart was tricky
    for (int j = 0; j < 2 * (n - i) - 1; j++) {
      if (j % 2 == 0) {
        cout << " " << rowStart << " ";
        rowStart++;
        start--;
      } else {
        cout << " * ";
      }
    }
    cout << endl;
  }
  return 0;
}
