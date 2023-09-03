#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int number;
  cin >> number;
  for (int i = 2; i < number; i++) {
    if (isPrime(i)) {
      cout << "Prime Number " << i << endl;
    } else {
      cout << "Not Prime Number " << i << endl;
    }
  }
  return 0;
}