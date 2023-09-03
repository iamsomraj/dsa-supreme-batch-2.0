#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;
  cin >> a;
  for (int row = 0; row < a; row++) {
    for (int col = 0; col < a; col++) {
      cout << " * ";
    }
    cout << endl;
  }
  return 0;
}