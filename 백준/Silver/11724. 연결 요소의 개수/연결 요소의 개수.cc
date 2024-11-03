#include <iostream>
#include <vector>

using namespace std;

vector<int> vt[1001];
int seen[1001];
int N, M;

void dfs(int vertex) {
  seen[vertex] = 1;
  for (int i = 0; i < vt[vertex].size(); i++) {
    int next = vt[vertex][i];
    if (seen[next] == 0) dfs(next);
  }
}

int main() {
  cout.sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);
  
  cin >> N >> M;
  int u, v, cnt = 0;
  
  for (int i = 0; i < M; i++) {
    cin >> u >> v;
    vt[u].push_back(v);
    vt[v].push_back(u);
  }
  
  for (int i = 1; i < N + 1; i++) {
    if(seen[i] == 0) {
      cnt++;
      dfs(i);
    }
  }
  
  cout << cnt << "\n";
  
  return 0;
}