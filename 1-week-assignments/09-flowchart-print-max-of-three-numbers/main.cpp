#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a > b && a > c) {
    cout << a << " is the maximum number" << endl;
  } else {
    if (b > c) {
      cout << b << " is the maximum number" << endl;
    } else {
      cout << c << " is the maximum number" << endl;
    }
  }
  return 0;
}