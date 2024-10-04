#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
  cout.sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);

  int n, h_cnt = 0;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    if (i < 100) {
      h_cnt += 1;
      continue;
    }

  string s = to_string(i);
  int diff = s[1] - s[0];
  bool is_han = true;


  for (int j = 2; j < s.size(); j++) {
    if (s[j] - s[j - 1] != diff) {
      is_han = false;
      break;
    }
  }

  if (is_han) h_cnt += 1;
    
  }

  cout << h_cnt;

  return 0;
}