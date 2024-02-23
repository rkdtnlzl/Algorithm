from collections import deque

dirX = [-1, 1, 0, 0]
dirY = [0, 0, -1, 1]

def bfs(x, y, n, m, maps):
    queue = deque()
    queue.append((x, y))
    while queue:
        x, y = queue.popleft()
        for i in range(4):
            newX = x + dirX[i]
            newY = y + dirY[i]
            if newX < 0 or newX >= n or newY < 0 or newY >= m:
                continue
            if maps[newX][newY] == 0:
                continue
            if maps[newX][newY] == 1:
                maps[newX][newY] = maps[x][y] + 1
                queue.append((newX, newY))
                
    return maps[n - 1][m - 1]

def solution(maps):
    answer = 0
    
    n = len(maps)
    m = len(maps[0])
    
    ans = bfs(0,0,n,m,maps)
    
    if ans != 1:
        answer = ans
    else:
        answer = -1
    
    return answer