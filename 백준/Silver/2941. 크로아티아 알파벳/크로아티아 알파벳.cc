#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

// 2941 -> 블로그
int main() {
  cout.sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);
  vector<string> croatians = {"c=", "c-", "d-", "lj", "nj", "s=", "dz=", "z="};
  
  string s;
  cin >> s;
  
  for (int i = 0; i < croatians.size(); i++) {
    string croatian = croatians[i];
    while (true) {
      int idx = (int) s.find(croatian);
      if (idx == string::npos) break;
      s.replace(idx, croatians[i].length(), "#");
    }
  }
  
  cout << s.length() << "\n";
  
  return 0;
}

//// 1157
//int main() {
//  cout.sync_with_stdio(false);
//  cout.tie(NULL);
//  cin.tie(NULL);
//  
//  int *alpha = new int[26];
//  string s;
//  cin >> s;
//  
//  for (int i = 0; i < s.length(); i++) {
//    if (s[i] >= 97)alpha[(int) s[i] - 97] += 1;
//    else alpha[(int) s[i] - 65] += 1;
//  }
//  
//  int iMax = 0, prevIMax = -1;
//  for (int i = 1; i < 26; i++) {
//    if (alpha[iMax] <= alpha[i]) {
//      prevIMax = iMax;
//      iMax = i;
//    }
//  }
//  
//  if (alpha[iMax] == alpha[prevIMax]) cout << "?";
//  else cout << (char) (iMax + 65);
//  
//  return 0;
//}

//// 2444
//int main() {
//  cout.sync_with_stdio(false);
//  cout.tie(NULL);
//  cin.tie(NULL);
//  
//  int i;
//  cin >> i;
//  
//  for (int cnt = 1; cnt <= i; cnt++) {
//    for (int space = 0; space < (i - cnt); space++) cout << " ";
//    for (int star = 0; star < (2 * cnt) - 1; star++) cout << "*";
//    cout << "\n";
//  }
//  
//  for (int cnt = (i - 1); cnt > 0; cnt--) {
//    for (int space = 0; space < (i - cnt); space++) cout << " ";
//    for (int star = 0; star < (2 * cnt) - 1; star++) cout << "*";
//    cout << "\n";
//  }
//  
//  return 0;
//}

//// 3003
//int main() {
//  cout.sync_with_stdio(false);
//  cout.tie(NULL);
//  cin.tie(NULL);
//  
//  vector<int> cv = {1, 1, 2, 2, 2, 8}, iv;
//  
//  string s, temp;
//  getline(cin, s);
//  istringstream iss(s);
//  while (getline(iss, temp, ' ')) {
//    iv.push_back(stoi(temp));
//  }
//  
//  for (int i = 0; i < iv.size(); i++) {
//    cout << cv[i] - iv[i] << " ";
//  }
//  
//  return 0;
//}

//// 25083
//int main() {
//  cout << "         ,r'\"7" << "\n";
//  cout << "r`-_   ,'  ,/" << "\n";
//  cout << " \\. \". L_r'" << "\n";
//  cout << "   `~\\/" << "\n";
//  cout << "      |" << "\n";
//  cout << "      |" << "\n";
//  
//  return 0;
//}
