#include <stdio.h>
#include "func.h"
#define N 3
int main (void) {
    int arr[N][N];
    int arr_sum[N][N];
    printf ("Enter masiv:\n");
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    func_suma_masiv(arr, arr_sum);
    printf ("\nResult:");
    for (int i = 0; i < N; i++){
        printf ("\n");
        for (int j = 0; j < N; j++){
            printf("%d ", arr_sum[i][j]);
        }
    }
}