#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
  cout.sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);
  
  int n, cnt = 0;
  cin >> n;
  
  for (int i = 0; i < n; i++) {
    int input;
    cin >> input;
    if (input != 1) {
      int dividedCnt = 0;
      for (int d = 2; d <= input; d++) {
        if (input % d == 0) dividedCnt++;
      }
      if (dividedCnt == 1) cnt++;
    }
  }
  
  cout << cnt;
  
  return 0;
}