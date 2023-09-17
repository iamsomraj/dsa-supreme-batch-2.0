#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &arr) {
  for (auto it : arr) {
    cout << it;
  }
  cout << endl;
  cout << endl;
}

int pivotIndex(vector<int> &nums) {
  vector<int> lsum(nums.size(), 0);
  vector<int> rsum(nums.size(), 0);

  for (int i = 1; i < nums.size(); i++) {
    lsum[i] = lsum[i - 1] + nums[i - 1];
  }

  for (int j = nums.size() - 2; j >= 0; j--) {
    rsum[j] = rsum[j + 1] + nums[j + 1];
  }

  for (int i = 0; i < nums.size(); i++) {
    if (rsum[i] == lsum[i]) {
      return i;
    }
  }

  return -1;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    cout << pivotIndex(arr) << endl;
  }
}

// To execute
// g++ main.cpp -o main.out && gtimeout 4s ./main.out<inputf.txt>outputf.txt