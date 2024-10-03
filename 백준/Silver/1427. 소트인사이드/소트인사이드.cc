#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  cout.sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);
  
  string number, temp;
  cin >> number;
  
  vector<char> vc;
  for (int i = 0; i < (int) number.length(); i++) vc.push_back(number[i]);
  
  sort(vc.begin(), vc.end());
  for (int i = (int) vc.size() - 1; i >= 0; i--) cout << vc[i];
}
