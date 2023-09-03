#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  // handling for odd - even input for n
  int fn = (n + 1) / 2; // fn gets a round off integer value
  int sn = n - fn;
  if (fn == sn) {
    // if sn becomes equal, we decrease it by 1 as second half is
    // smaller than first half
    sn = sn - 1;
  }
  // first half - fn
  for (int i = 0; i < fn; i++) {
    for (int j = 0; j <= i; j++) {
      cout << " * ";
    }
    cout << endl;
  }
  // second half - sn
  for (int i = 0; i < sn; i++) {
    for (int j = 0; j < sn - i; j++) {
      cout << " * ";
    }
    cout << endl;
  }
  return 0;
}
