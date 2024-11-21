#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int V, E, a, b, c;
int arr[401][401];
const int INF = 1e9;

void floyd() {
	for (int k = 1; k <= V; k++) {
		for (int i = 1; i <= V; i++) {
			for (int j = 1; j <= V; j++) {
				if (arr[i][j] > arr[i][k] + arr[k][j]) {
					arr[i][j] = arr[i][k] + arr[k][j];
				}
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> V >> E;
  	// 플로이드 와샬 초기 설정
	for (int i = 1; i <= V; i++) {
		for (int j = 1; j <= V; j++) {
			if (i != j) arr[i][j] = INF;
		}
	}
	for (int i = 0; i < E; i++) {
		cin >> a >> b >> c;
		arr[a][b] = c;
	}
	floyd();

	int res = INF;
	for (int i = 1; i <= V; i++) {
		for (int j = 1; j <= V; j++) {
			if (i == j) continue;
			res = min(res, arr[i][j] + arr[j][i]);
		}
	}
	cout << (res == INF ? -1 : res);
}