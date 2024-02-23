from collections import defaultdict, deque

def solution(tickets):
    # 그래프 생성
    graph = defaultdict(list)
    for start, end in tickets:
        graph[start].append(end)
        
    # 그래프를 알파벳 순으로 정렬
    for city in graph:
        graph[city].sort()
    
    answer = []
    stack = ["ICN"]  # 시작점은 ICN
    
    while stack:
        current = stack[-1]
        
        # 현재 공항에서 출발하는 티켓이 없거나 이미 사용한 티켓인 경우
        if current not in graph or len(graph[current]) == 0:
            answer.append(stack.pop())  # 경로에 추가
        else:
            stack.append(graph[current].pop(0))  # 다음 공항으로 이동
        
    return answer[::-1]  # 역순으로 반환해야 함