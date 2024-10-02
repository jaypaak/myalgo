#include <iostream>
using namespace std;

// 10951



// 10952



// 2439



// 2438
int main() {
  short t;
  cin >> t;
  
  for (int i = 1; i <= t; i++) {
    for (int j = 0; j < i; j++)
      cout << "*";
    cout << "\n";
  }
  return 0;
}

//// 11022
//int main() {
//  cin.tie(NULL);
//  cout.sync_with_stdio(false);
//  
//  int t;
//  cin >> t;
//  for (int i = 1; i <= t; i++) {
//    short a, b;
//    cin >> a >> b;
//    cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << "\n";
//  }
//  
//  return 0;
//}

//// 11021
//int main() {
//  cin.tie(NULL);
//  cout.sync_with_stdio(false);
//  
//  int t;
//  cin >> t;
//  for (int i = 1; i <= t; i++) {
//    short a, b;
//    cin >> a >> b;
//    cout << "Case #" << i << ": " << a + b << "\n";
//  }
//  
//  return 0;
//}

//// 15552 -> 블로그
//int main() {
//  cin.tie(NULL);
//  cout.sync_with_stdio(false);
//  int t;
//  cin >> t;
//  for (int i = 0; i < t; i++) {
//    int a, b;
//    cin >> a >> b;
//    cout << a + b << "\n";
//  }
//  
//  return 0;
//}

//// 25314
//int main() {
//  int n;
//  cin >> n;
//  for (int i = 0; i < n; i += 4) cout << "long ";
//  cout << "int";
//  
//  return 0;
//}

//// 25304
//int main() {
//  int total, n1, sum = 0;
//  cin >> total;
//  cin >> n1;
//  for (int i = 0; i < n1; i++) {
//    int price, n2;
//    cin >> price >> n2;
//    sum += price * n2;
//  }
//  
//  string r = (total == sum) ? "Yes" : "No";
//  
//  cout << r;
//  
//  return 0;
//}

//// 8393
//int main() {
//  int n, sum = 0;
//  cin >> n;
//  
//  for (int i = 1; i <= n; i++) sum += i;
//  
//  cout << sum;
//  
//  return 0;
//}

//// 10950
//int main() {
//  short a, b, t;
//  cin >> t;
//  for (int i  = 0; i < t; i++) {
//    cin >> a >> b;
//    cout << a + b << endl;
//  }
//  
//  return 0;
//}

//// 2793
//int main() {
//  short n;
//  cin >> n;
//  
//  for (int i = 1; i < 10; i++)
//    cout << n << " * " << i << " = " << n * i << endl;
//  
//  
//  return 0;
//}
