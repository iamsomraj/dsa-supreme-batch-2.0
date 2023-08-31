#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      cout << ' ';
    }
    for (int j = 0; j < n - i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}

// To execute
// g++ main.cpp -o main.out && gtimeout 4s ./main.out<inputf.in>outputf.in