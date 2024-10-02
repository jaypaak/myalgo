#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

// 3003
int main() {
  cout.sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);
  
  vector<int> cv = {1, 1, 2, 2, 2, 8}, iv;
  
  string s, temp;
  getline(cin, s);
  istringstream iss(s);
  while (getline(iss, temp, ' ')) {
    iv.push_back(stoi(temp));
  }
  
  for (int i = 0; i < iv.size(); i++) {
    cout << cv[i] - iv[i] << " ";
  }
  
  
  return 0;
}

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
