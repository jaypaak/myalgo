#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
  cout.sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);
  
  int n;
  cin >> n;
  
  int p1 = 1, p2 = 1, cnt = 0, sum;
  while (p2 <= n) {
    sum = 0;
    for (int i = p1; i <= p2; i++) sum += i;
    
    if (sum > n) p1++;
    else if (sum < n) p2++;
    else {
      p1++;
      p2++;
      cnt++;
    }
  }
  
  cout << cnt << "\n";
  
  return 0;
}