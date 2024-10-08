#include <iostream>

using namespace std;

int main() {
  cout.sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);
  
  int arr[10001] = {0};
  int n;
  cin >> n;
  
  for (int i = 0; i < n; i++) {
    int input;
    cin >> input;
    arr[input] += 1;
  }
  
  for (int i = 1; i < 10001; i++) {
    for (int j = 0; j < arr[i]; j++) cout << i << "\n";
  }
  
  return 0;
}