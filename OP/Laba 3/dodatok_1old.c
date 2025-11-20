#include <stdio.h>
#define N 10
int main() {
    int arr[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Masiv:  ");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    int temp1 = arr[N - 2];
    int temp2 = arr[N - 1];


    for (int i = N - 1; i >= 2; i--) {
        arr[i] = arr[i - 2];
    }

    arr[0] = temp1;
    arr[1] = temp2;


    printf("Edit Masiv:  ");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}//
// Created by maksim on 2025-10-17.
//