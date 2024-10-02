#include <iostream>
using namespace std;

// 9498
int main() {
  int score;
  cin >> score;
  
  char r = (score >= 90) ? 'A'
  : (score >= 80) ? 'B'
  : (score >= 70) ? 'C'
  : (score >= 60) ? 'D'
  : 'F';
  
  cout << r;
  
  return 0;
}

//// 1330
//int main() {
//  int a, b;
//  cin >> a >> b;
//  
//  string r = (a < b) ? "<"
//  : (a > b) ? ">"
//  : "==";
//  
//  cout << r;
//  
//  return 0;
//}
