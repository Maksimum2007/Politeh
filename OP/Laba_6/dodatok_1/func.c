/*Написати функцію для додавання двох матриць. З її допомогою додати вихідну матрицю
і транспоновану. */
#include <stdio.h>
#define N 3
#include <stdio.h>
#include "func.h"

int func_suma_masiv(int arr[N][N], int arr_sum[N][N]) {
	int arr_t[N][N];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			arr_t[i][j] = arr[i][j];
		}
	}

	int swap;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i<j){
				swap = arr[i][j];
				arr[i][j] = arr[j][i];
				arr[j][i] = swap;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			arr_sum[i][j] = arr[i][j]+arr_t[i][j];
		}
	}

}
