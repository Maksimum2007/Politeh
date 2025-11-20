#include <stdio.h>
#define N 3
void f_arr (int arr[N][N], int arr_t[N][N], int arr_dubutok[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int sum = 0;

            for (int k = 0; k < N; k++) {
                sum += arr[i][k] * arr_t[k][j];
                arr_dubutok[i][j] = sum;
            }
        }
    }
}
