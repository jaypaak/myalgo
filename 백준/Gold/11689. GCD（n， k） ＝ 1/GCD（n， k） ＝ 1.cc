#include <iostream>

using namespace std;

int main() {
  cout.sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);
  
  long long n;
  cin >> n;
  
  long long euler = n;
  
  long long i = 2;
  while (i * i <= n) {
    if (n % i == 0) euler = (euler / i) * (i - 1);
    while (n % i == 0) n /= i;
    i++;
  }
  
  cout << (n == 1 ? euler : euler / n * (n - 1)) << "\n";
  
  return 0;
}