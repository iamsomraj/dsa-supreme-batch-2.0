#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &arr) {
  for (auto it : arr) {
    cout << " " << it << " ";
  }
  cout << endl;
}

void sortColors(vector<int> &nums) {
  int left = 0, right = nums.size() - 1, mid = 0;
  while (mid <= right) {
    if (nums[mid] == 0) {
      swap(nums[left], nums[mid]);
      left++;
      mid++;
    } else if (nums[mid] == 1) {
      mid++;
    } else {
      swap(nums[right], nums[mid]);
      right--;
    }
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> nums(n, 0);
    for (int i = 0; i < n; i++) {
      cin >> nums[i];
    }
    sortColors(nums);
    print(nums);
  }
}

// To execute
// g++ main.cpp -o main.out && gtimeout 4s ./main.out<inputf.txt>outputf.txt