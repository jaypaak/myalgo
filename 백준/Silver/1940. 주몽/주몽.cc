#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
  cout.sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);
  
  string n_s, m_s;
  getline(cin, n_s);
  getline(cin, m_s);
  long m = stol(m_s);
  
  vector<long> v;
  string s, temp;
  getline(cin, s);
  istringstream iss(s);
  
  while (getline(iss, temp, ' ')) v.push_back(stoi(temp));
  sort(v.begin(), v.end());
  
  long p1 = 0, p2 = v.size() - 1, cnt = 0, sum;
  while (p1 < p2) {
    sum = v[p1] + v[p2];
    
    if (sum < m) p1++;
    else if (sum > m) p2--;
    else {cnt++; p2--;}
  }
  
  cout << cnt << "\n";
    
  return 0;
}