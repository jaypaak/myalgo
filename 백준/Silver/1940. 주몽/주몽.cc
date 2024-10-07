#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  cout.sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);
  
  int n, m;
  cin >> n; // 주어진 재료의 수
  cin >> m; // 캅옷을 만드는데 필요한 고유번호의 합
  
  vector<int> v;
  for (int i = 0; i < n; i++) {
    int uniqueNumber; // 각 재료의 고유번호
    cin >> uniqueNumber;
    v.push_back(uniqueNumber); // 순서대로 저장
  }
  
  sort(v.begin(), v.end()); // 오름차순으로 정렬
  
  // 투포인터 알고리즘
  int p1 = 0, p2 = (int) v.size() - 1, cnt = 0, sum;
  while (p1 != p2) {
    sum = v[p1] + v[p2];
    if (sum > m) p2--;
    else if (sum < m) p1++;
    else {cnt++;p2--;}
  }
  
  cout << cnt << "\n";
  
  return 0;
}