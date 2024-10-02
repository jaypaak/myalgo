#include <iostream>
using namespace std;

// 2675
int main() {
  int t;
  cin >> t;
  
  for (int i = 0; i < t; i++) {
    int n;
    string s;
    cin >> n >> s;
    
    for (int j = 0; j < (int) s.length(); j++)
      for (int k = 0; k < n; k++) cout << s[j];
    
    cout << endl;
  }
  
  return 0;
}

//// 10809
//int main() {
//  string s;
//  cin >> s;
//    
//  for (int i = 'a'; i <= 'z'; i++) cout << (int) s.find(i) << " ";
//  
//  return 0;
//}

//// 11720
//int main() {
//  int n, sum = 0;
//  string s;
//  cin >> n;
//  cin >> s;
//  
//  for (int i = 0; i < n; i++) sum += ((int) s.at(i) - 48);
//  
//  cout << sum;
//  
//  return 0;
//}

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
