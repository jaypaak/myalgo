#include <iostream>
using namespace std;

// 11720
int main() {
  int n, sum = 0;
  string s;
  cin >> n;
  cin >> s;
  
  for (int i = 0; i < n; i++) sum += ((int) s.at(i) - 48);
  
  cout << sum;
  
  return 0;
}

//// 11654
//int main() {
//  char c;
//  cin >> c;
//  
//  cout << (int) c;
//  
//  return 0;
//}

//// 9086
//int main() {
//  int n;
//  cin >> n;
//  
//  for (int i = 0; i < n; i++) {
//    string s;
//    cin >> s;
//    
//    cout << s.at(0) << s.at(s.size() - 1) << "\n";
//  }
//  
//  return 0;
//}

//// 2743
//int main() {
//  string s;
//  cin >> s;
//  
//  cout << s.size();
//  
//  return 0;
//}

//// 27866
//int main() {
//  string s;
//  int idx;
//  cin >> s;
//  cin >> idx;
//  
//  cout << s.at(idx - 1);
//  
//  return 0;
//}
