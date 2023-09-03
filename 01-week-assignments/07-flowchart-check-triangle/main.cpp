#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  bool conditionOne = (a + b) > c;
  bool conditionTwo = (b + c) > a;
  bool conditionThree = (a + c) > b;
  if (conditionOne || conditionTwo || conditionThree) {
    cout << a << " , " << b << " , " << c << "  make a triangle!";
  } else {
    cout << a << " , " << b << " , " << c << " does not make a triangle!";
  }
  return 0;
}