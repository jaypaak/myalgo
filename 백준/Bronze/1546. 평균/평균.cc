#include <iostream>
using namespace std;

// 1546
int main() {
  cout.precision(10);
  cout << fixed;
  
  int n;
  float sum = 0;
  cin >> n;
  int *scores = new int[n];
  
  for (int i = 0; i < n; i++) cin >> *(scores + i);
  
  
  int max = *scores;
  for (int i = 1; i < n; i++)
    if (max < *(scores + i)) max = *(scores + i);
  
  for (int i = 0; i < n; i++) {
    sum += ((float) *(scores + i) / max) * 100;
  }
  
  cout << sum / n;
  return 0;
}

//// 10811
//int main() {
//  int n, m, a, b;
//  cin >> n >> m;
//  int *basket = new int[n + 1];
//  for (int i = 1; i < n + 1; i++) basket[i] = i;
//  
//  for (int i = 0; i < m; i++) {
//    cin >> a >> b;
//    while (true) {
//      if (a >= b) break;
//      swap(basket[a], basket[b]);
//      a++;b--;
//    }
//  }
//  
//  for (int i = 1; i <= n; i++) cout << *(basket + i) << " ";
//  
//  return 0;
//}

//// 3052
//int main() {
//  bool *remainders = new bool[42];
//  short cnt = 0;
//  
//  for (int i = 0; i < 10; i++) {
//    int a;
//    cin >> a;
//    if (!remainders[a % 42]) {
//      remainders[a % 42] = 1;
//      cnt += 1;
//    }
//  }
//  
//  cout << cnt;
//  
//  return 0;
//}

//// 5597
//int main() {
//  bool *students = new bool[30];
//  
//  for (short i = 0; i < 28; i++) {
//    short a;
//    cin >> a;
//    students[a - 1] = 1;
//  }
//  
//  for (int i = 0; i < 30; i++) {
//    if (!students[i]) cout << (i + 1) << "\n";
//  }
//  
//  return 0;
//}

//// 10813
//int main() {
//  cin.tie(NULL);
//  cout.sync_with_stdio(false);
//  
//  short n, m;
//  cin >> n >> m;
//  
//  short *basket = new short[n];
//  for (short i = 0; i < n; i++) basket[i] = (i + 1);
//  
//  short *arr = new short[2];
//  for (short i = 0; i < m; i++) {
//    for (short j = 0; j < 2; j++) cin >> *(arr + j);
//    short temp = basket[*arr - 1];
//    basket[*arr - 1] = basket[*(arr + 1) - 1];
//    basket[*(arr + 1) - 1] = temp;
//  }
//  
//  for (short i = 0; i < n; i++) cout << *(basket + i) << " ";
//  
//  return 0;
//}

//// 10810
//int main() {
//  short n, m;
//  cin >> n >> m;
//  
//  short *basket = new short[n];
//  short *arr = new short[3];
//  
//  for (short i = 0; i < m; i++) {
//    for (short j = 0; j < 3; j++) cin >> *(arr + j);
//    for (short k = *arr; k <= *(arr + 1); k++) basket[k - 1] = *(arr + 2);
//  }
//  
//  for (short i = 0; i < n; i++) cout << *(basket + i) << "\n";
//  
//  return 0;
//}

//// 2562
//int main() {
//  cin.tie(NULL);
//  cout.sync_with_stdio(false);
//  
//  short *arr = new short[9];
//  int idx, max;
//  
//  for (short i = 0; i < 9; i++) cin >> *(arr + i);
//  
//  max = *arr;
//  
//  for (short i = 0; i < 9; i++) {
//    if (max < *(arr + i)) {
//      max = *(arr + i);
//      idx = i + 1;
//    }
//  }
//  
//  cout << max << "\n" << idx << "\n";
//  
//  return 0;
//}

//// 10818
//int main() {
//  cin.tie(NULL);
//  cout.sync_with_stdio(false);
//  
//  int t;
//  cin >> t;
//  int *arr = new int[t];
//  
//  for (int i = 0; i < t; i++) {
//    cin >> *(arr + i);
//  }
//  
//  int min = *arr, max = *arr;
//  for (int i = 0; i < t; i++) {
//    if (min > *(arr + i)) min = *(arr + i);
//    if (max < *(arr + i)) max = *(arr + i);
//  }
//  
//  cout << min << " " << max << "\n";
//  
//  return 0;
//}

//// 10871
//int main() {
//  int n, t;
//  cin >> n >> t;
//  int *arr = new int[n];
//  
//  for (int i = 0; i < n; i++) cin >> *(arr + i);
//  
//  for (int i = 0; i < n; i++) {
//    if (t > *(arr + i)) cout << *(arr + i) << " ";
//  }
//  
//  
//  return 0;
//}

//// 10807
//int main() {
//  short n, t, c = 0;
//  cin >> n;
//  
//  short *a = new short[n];
//  
//  for (short i = 0; i < n; i++) cin >> *(a + i);
//  
//  cin >> t;
//  
//  for (short i = 0; i < n; i++) {
//    if (t == *(a + i)) c += 1;
//  }
//  
//  cout << c << "\n";
//  
//  return 0;
//}
