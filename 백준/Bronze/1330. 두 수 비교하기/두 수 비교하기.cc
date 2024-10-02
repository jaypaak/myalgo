#include <iostream>
using namespace std;

// 1330
int main() {
  int a, b;
  cin >> a >> b;
  
  string r = (a < b) ? "<" : (a > b) ? ">" : "==";
  
  cout << r;
  
  return 0;
}
