#include <iostream>
using namespace std;

// 10807
int main() {
  short n, t, c = 0;
  cin >> n;
  
  short *a = new short[n];
  
  for (short i = 0; i < n; i++) cin >> *(a + i);
  
  cin >> t;
  
  for (short i = 0; i < n; i++) {
    if (t == *(a + i)) c += 1;
  }
  
  cout << c << "\n";
  
  return 0;
}
