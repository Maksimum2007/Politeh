//
// Created by maksimum on 11/12/25.
//
#include <stdio.h>
#define N 100
//
// Created by maksimum on 11/12/25.
//
#include <stdio.h>
#define N 100
int func_n_dub (int arr[N][N], int arr_t[N][N], int size_row , int size_rad, int size_row_t, int size_rad_t,   int arr_result[N][N]) {
    int sum = 0;
    for (int i = 0; i < size_rad; i++) {
        for (int j = 0; j < size_row_t; j++) {
            int sum = 0;
            for (int k = 0; k < size_row ; k++) {
                sum += arr[i][k] * arr_t[k][j];

            }
            arr_result[i][j] = sum;

        }
    }
}