#include <iostream>
using namespace std;

// 10818
int main() {
  cin.tie(NULL);
  cout.sync_with_stdio(false);
  
  int t;
  cin >> t;
  int *arr = new int[t];
  
  for (int i = 0; i < t; i++) {
    cin >> *(arr + i);
  }
  
  int min = *arr, max = *arr;
  for (int i = 0; i < t; i++) {
    if (min > *(arr + i)) min = *(arr + i);
    if (max < *(arr + i)) max = *(arr + i);
  }
  
  cout << min << " " << max << "\n";
  
  return 0;
}

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
