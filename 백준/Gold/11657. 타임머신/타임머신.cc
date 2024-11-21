#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
#define INF 2100000000 // 21억

int N, M;
int A, B, C;
int a, b;
long long dist[501];
bool cycle;
vector<pair<int, int>> v[501];

int main()
{
    ios_base::sync_with_stdio(0); // 빠른 입출력을 위한 설정
    cin.tie(NULL); // cin과 cout의 동기화 끊기

    cin >> N >> M;  // N은 도시의 수, M은 버스 노선의 수

    // 버스 노선 정보 입력
    for (int i = 0; i < M; i++)
    {
        cin >> A >> B >> C;
        v[A].push_back({ B,C });  // A 도시에서 B 도시로 가는 C 시간의 버스
    }

    // 모든 도시의 최단 거리를 INF로 초기화
    for (int i = 1; i <= N; i++)
        dist[i] = INF;

    dist[1] = 0; // 시작 도시(1번 도시)의 거리는 0

    // 벨만-포드 알고리즘
    for (int i = 1; i <= N; i++) // N번만큼 반복
        for (int j = 1; j <= N; j++) // 모든 도시를 확인
        {
            for (int k = 0; k < v[j].size(); k++)  // 해당 도시에서 갈 수 있는 모든 도시
            {
                int next = v[j][k].first;  // 도착 도시
                int d = v[j][k].second;    // 이동하는데 걸리는 시간

                // 만약 dist[j]가 INF가 아니고, dist[next]보다 더 작은 경로가 발견되면 갱신
                if (dist[j] != INF && dist[next] > dist[j] + d)
                {
                    dist[next] = dist[j] + d;
                    if (i == N) cycle = true; // N번째 반복에서도 갱신되면 음수 사이클이 존재
                }
            }
        }

    // 음수 사이클이 존재하면 -1 출력
    if (cycle) cout << -1 << '\n';
    else
    {
        // 각 도시에 대한 최단 거리 출력
        for (int i = 2; i <= N; i++)
            cout << (dist[i] != INF ? dist[i] : -1) << '\n';  // 경로가 없으면 -1 출력
    }
}
