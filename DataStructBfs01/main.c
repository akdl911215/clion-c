#include <stdio.h>

#define MAX 1001
int adj[MAX][MAX]; // 인접 행렬 만들때 사용
int discovered[MAX]; // BFS 발견 했는지 check

typedef struct Queue
{
    int front, rear;
    int data[MAX];
}Queue;

void BFS(int start, int N)
{
    int here, there;

    Queue q;
    q.front = -1;
    q.rear = -1;

    discovered[start] = 1; // 발견 정점 최적화
    q.data[++q.rear] = start; // push

    // queue 꺼내기
    while (q.front < q.rear) {
        here = q.data[++q.front]; // pop
        printf("%d", here);

        // 인접 행렬 구하기
        for (int i = 0; i <= N; ++i) {
            if (adj[here][i]) {
                there = i;

                if (!discovered[there]) {
                    discovered[there] = 1;
                    q.data[++q.rear] = there; // push
                }
            }
        }
    }
}

int main() {
    int N, M, v; // 정점 개수, 간선 개수, 시작 정점
    int x, y; // 좌표

    scanf("%d %d %d", &N, &M, &v);

    for (int i = 1; i <= M; ++i) { // M(간선 개수) 만큼
        scanf("%d %d", &x, &y);
        adj[x][y] = 1;
        adj[y][x] = 1; // 인접 행렬 만들기
    }

    for (int i = 1; i <= M; ++i) { // M(간선 개수) 만큼
        for (int j = 1; j <= M; ++j) {
            printf("adj[%d][%d]: %d\n", i, j, adj[i][j]);
        }
    }

    // BFS 호출
    BFS(v, N);

    return 0;
}
