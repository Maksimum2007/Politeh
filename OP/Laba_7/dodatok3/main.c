#define N 100
#include "func.h"
#include <stdio.h>
int main(void) {
    double arr_a [N] = {0};
    double arr_b [N] = {0};
    for (int i = 0; i < N; i++) {
        arr_a[i] = 1;
        arr_b[i] = i+1;
    }
    int n = 0;
    printf ("Enter n\n");
    scanf ("%d", &n);
    double result = f_drob(arr_a, arr_b, 1 , n);
    printf ("%f", result);
    return 0;
}
