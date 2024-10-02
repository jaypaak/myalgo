N, M = map(int, input().split())
matrix = [input() for _ in range(N)]
visited = [[0] * M for _ in range(N)]

cur_loc = [[0, 0]]
dx, dy = [0, 0, -1, 1], [-1, 1, 0, 0]

while True:
  cur_x, cur_y = cur_loc[0]
  cur_loc.pop(0)
  if cur_x == N - 1 and cur_y == M - 1:
    print(visited[cur_x][cur_y] + 1)
    break
  for i in range(4):
    nx, ny = cur_x + dx[i], cur_y + dy[i]
    if 0 <= nx < N and 0 <= ny < M:
      if visited[nx][ny] == 0 and matrix[nx][ny] == "1":
        visited[nx][ny] = visited[cur_x][cur_y] + 1
        cur_loc.append([nx, ny])
