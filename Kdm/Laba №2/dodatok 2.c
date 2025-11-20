#include <stdio.h>
#define N 8
int main(void) {
    printf ("Enter masiv:\n");
    int arr[N][N];
    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            scanf ("%d", &arr[i][j]);
        }
    }

    for (int i = 0 ; i<N; i++){
        if (arr[i][i] >0) {
        printf ("Naumber of diagonal !=0!");
            return 0;
        }

    }
    int visited[N];
    int path[N+1];
    int total_weight = 0;
    int path_index = 0;
    int current_vertex = 0;



    for (int i = 0; i<N; i++) {
        visited[i]=0;
    }

    path[path_index] = current_vertex;
    path_index++;
    visited[current_vertex] = 1;

    for (int count = 0; count <N-1; count++) {
        int min_weight = 999999;
        int next_vertex = -1;


        for (int j = 0; j<N; j++) {
            if (visited[j] == 0 && arr[current_vertex][j] < min_weight){
                min_weight = arr [current_vertex][j];
                next_vertex = j;
            }
        }
        total_weight += min_weight;
        current_vertex = next_vertex;
        visited [current_vertex] = 1;
        path[path_index] = current_vertex;
        path_index++;
    }
    total_weight += arr[current_vertex][0];
    path [path_index] = 0;
    printf ("Galmitovui circle:\n");
    for (int i = 0; i<=N; i++) {
        printf ("%d ", path[i]+1);
        if (i < N) {
            printf ("->");
        }
    }
    printf ("\nGeneral weight of circle: %d\n", total_weight);
    return 0;
    .
}
