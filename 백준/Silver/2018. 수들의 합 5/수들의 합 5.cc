#include <iostream>

using namespace std;

int main() {
  cout.sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);
  
  long n;
  cin >> n;
  
  long p1 = 1, p2 = 1, cnt = 0;
  while (p2 < n) {
    long sum = 0;
    for (long i = p1; i <= p2; i++) sum += i;
    
    if (sum < n) p2++;
    else if (sum > n) p1++;
    else {p1++; cnt++;}
  }
  
  cout << (cnt + 1) << "\n";
  
  return 0;
}