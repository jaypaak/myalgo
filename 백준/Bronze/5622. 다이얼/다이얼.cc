#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

// 11718 -> 아직 안품

// 5622 -> 아직 안품
int main() {
  cin.tie(NULL);
  cout.sync_with_stdio(false);
  
  string arr[12] = {"", "", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ", ""};
  
  int duration = 0;
  string s;
  cin >> s;
  
  for (int i = 0; i < s.length(); i++) {
    for (int j = 0; j < 12; j++) {
      for (int k = 0; k < arr[j].length(); k++) {
        if (s[i] == arr[j][k]) {
          duration += j;
        }
      }
    }
  }
  
  cout << duration << "\n";
  
  return 0;
}

//// 2908
//int main() {
//  cin.tie(NULL);
//  cout.sync_with_stdio(false);
//  
//  string s[2];
//  for (int i = 0; i < 2; i++) cin >> s[i];
//  
//  for (int i = 0; i < 2; i++) {
//    char temp = s[i][0];
//    s[i][0] = s[i][2];
//    s[i][2] = temp;
//  }
//  
//  int max = stoi(s[0]) > stoi(s[1]) ? stoi(s[0]) : stoi(s[1]);
//  cout << max;
//
//  return 0;
//}

//// 1152 -> 블로그
//int main() {
//  string s, temp;
//  getline(cin, s); // cin >> s 일 땐 getline(iss, temp, ' ')이 작동하지 않는다.
//  istringstream iss(s);
//  
//  vector<string> v;
//  while (getline(iss, temp, ' ')) v.push_back(temp);
//  
//  long cnt = s[0] == ' ' ? v.size() - 1 : v.size();
//  cout << cnt;
//  
//  return 0;
//}

////// 2675
//int main() {
//  int t;
//  cin >> t;
//  
//  for (int i = 0; i < t; i++) {
//    int n;
//    string s;
//    cin >> n >> s;
//    
//    for (int j = 0; j < (int) s.length(); j++)
//      for (int k = 0; k < n; k++) cout << s[j];
//    cout << endl;
//  }
//  
//  return 0;
//}

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
