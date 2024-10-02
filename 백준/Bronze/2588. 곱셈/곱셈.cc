#include <iostream>
using namespace std;

// 2588
int main() {
  int a, b;
  cin >> a;
  cin >> b;
  
  cout << a * (b % 10) << endl
  << a * ((b % 100) / 10) << endl
  << a * (b / 100) << endl
  << a * b;
  
  return 0;
}

//// 10430
//int main() {
//  int a, b, c;
//  cin >> a >> b >> c;
//  
//  int r1, r2, r3, r4;
//  r1 = (a + b) % c;
//  r2 = ((a % c) + (b % c)) % c;
//  r3 = (a * b) % c;
//  r4 = ((a % c) * (b % c)) % c;
//  cout
//  << r1 << endl
//  << r2 << endl
//  << r3 << endl
//  << r4;
//  
//  return 0;
//}

//// 18108
//int main() {
//  int year;
//  cin >> year;
//  
//  cout << year - 543;
//  
//  return 0;
//}

//// 10926
//int main() {
//  string name;
//  cin >> name;
//  
//  cout << name << "??!";
//  
//  return 0;
//}

//// 10869
//int main() {
//  int a, b;
//  
//  cin >> a >> b;
//  
//  cout 
//  << a + b << endl
//  << a - b << endl
//  << a * b << endl
//  << a / b << endl
//  << a % b;
//  
//  return 0;
//}

//// 1008 -> 블로그
//int main() {
//  int a, b;
//  
//  cin >> a >> b;
//  cout.precision(50);
////  cout << fixed;
//  
//  cout << (double) a / b;
//  
//  return 0;
//}

//// 10998
//int main() {
//  int a, b;
//  
//  cin >> a >> b;
//  
//  cout << a * b;
//  
//  return 0;
//}

//// 1001
//int main() {
//  int a, b;
//  
//  cin >> a >> b;
//  
//  cout << a - b;
//  
//  return 0;
//}

//// 1000
//int main() {
//  int a, b;
//  
//  cin >> a >> b;
//  
//  cout << a + b;
//  
//  return 0;
//}

//// 2557
//int main() {
//  cout << "Hello World!";
//
//  return 0;
//}
