//
// Created by maksimum on 11/10/25.
//
#include <stdio.h>
#include "dub.h"
#define N 100
int main() {
    int arr[N][N];
    int cout = 0;

        for ( int i = 0; i < N; i++ ) {
            for (int j = 0; j < N; j++) {
                arr[i][j] = cout++;
            }
        }

        int arr_t[N][N];

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                arr_t[i][j] = arr[j][i];
            }
        }

        int size_row, size_row_t, size_rad, size_rad_t;
        printf("Enter size of radok and row in your matrix: \n");
        scanf("%d %d", &size_rad, &size_row );
        printf("Enter size of row in your matrix_t: \n");
        scanf("%d %d", &size_rad_t, &size_row_t);

        if (size_rad != size_row_t) {
            printf ("Your entered wrong size of matrix!");
            return 0;
        }

        int arr_result[N][N];
        func_n_dub (arr, arr_t, size_row, size_rad, size_row_t, size_rad_t, arr_result);
        for (int i = 0; i < size_rad; i++) {
            printf ("\n");
            for (int j = 0; j < size_row_t ; j++) {
                printf("%d\t ", arr_result[i][j]);
            }
        }
        return 0;
}