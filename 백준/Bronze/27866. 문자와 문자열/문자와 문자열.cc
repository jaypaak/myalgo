#include <iostream>
using namespace std;

// 27866
int main() {
  string s;
  int idx;
  cin >> s;
  cin >> idx;
  
  cout << s.at(idx - 1);
  
  return 0;
}
