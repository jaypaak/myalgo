#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
  cout.sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);
  
  int n;
  cin >> n;

  int cnt = 1;
  stack<int> stack;
  vector<char> vc;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    
    while (cnt <= x) {
      stack.push(cnt++);
      vc.push_back('+');
    }
    
    if (stack.top() == x) {
      stack.pop();
      vc.push_back('-');
    } else {
      cout << "NO\n";
      return 0;
    }
  }
  
  for (int i = 0; i < (int) vc.size(); i++) cout << vc[i] << "\n";
  
  return 0;
}