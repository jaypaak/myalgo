#include <iostream>
using namespace std;

// 14681
int main() {
  int x, y;
  cin >> x;
  cin >> y;
  
  short r = ((x > 0) && (y > 0)) ? 1
  : ((x < 0) && (y > 0)) ? 2
  : ((x < 0) && (y < 0)) ? 3
  : 4;
  
  cout << r;
  
  return 0;
}

//// 2753
//int main() {
//  int y;
//  cin >> y;
//  
//  if (((y % 100) != 0 || (y % 400) == 0) && ((y % 4) == 0)) {
//    cout << 1;
//  } else {
//    cout << 0;
//  }
//  
//  return 0;
//}

//// 9498
//int main() {
//  int score;
//  cin >> score;
//  
//  char r = (score >= 90) ? 'A'
//  : (score >= 80) ? 'B'
//  : (score >= 70) ? 'C'
//  : (score >= 60) ? 'D'
//  : 'F';
//  
//  cout << r;
//  
//  return 0;
//}

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
