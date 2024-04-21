/*. Write a C program for the implementation of Dijkstra’s shortest path algorithm for 
findingshortest path from a given source vertex using adjacency cost matrix.*/



#include <stdio.h>
#include <limits.h>

int n;
#define MAX 10

int minDistance(int dist[], int visited[]) {
    int min = INT_MAX, min_index, i;
    for (i = 0; i < n; i++) {
        if (visited[i] == 0 && dist[i] <= min) {
            min = dist[i];
            min_index = i;
        }
    }
    return min_index;
}

void printSolution(int dist[]) {
    printf("Vertex Distance from Source\n");
    for (int i = 0; i < n; i++)
        printf("%d \t\t %d\n", i, dist[i]);
}

void dijkstra(int a[][MAX], int src) {
    int dist[MAX];
    int visited[MAX];
    
    for (int i = 0; i < n; i++) {
        dist[i] = INT_MAX;
        visited[i] = 0;
    }
    
    dist[src] = 0;

    for (int i = 0; i < n - 1; i++) {
        int u = minDistance(dist, visited);
        visited[u] = 1;
        for (int v = 0; v < n; v++) {
            if (!visited[v] && a[u][v] && dist[u] != INT_MAX && dist[u] + a[u][v] < dist[v]) {
                dist[v] = dist[u] + a[u][v];
            }
        }
    }
    printSolution(dist);
}

int main() {
    int max, a[MAX][MAX], i, j; 
    printf("Enter No of vertices: ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    max = n;
    dijkstra(a, 0);
}