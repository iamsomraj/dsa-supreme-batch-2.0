#include <bits/stdc++.h>
using namespace std;

bool twoSum(vector<int> arr, int target) {
  sort(arr.begin(), arr.end()); // for array - sort(arr, arr+n);
  int low = 0, high = arr.size() - 1;
  while (low < high) {
    int sum = arr[low] + arr[high];
    if (sum == target) {
      return true;
    } else if (sum > target) {
      high--;
    } else {
      low++;
    }
  }
  return false;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    vector<int> inputArr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
      int element;
      cin >> element;
      inputArr.push_back(element);
    }
    int target;
    cin >> target;
    cout << twoSum(inputArr, target) << endl;
  }
}

// To execute
// g++ main.cpp -o main.out && gtimeout 4s ./main.out<inputf.txt>outputf.txt