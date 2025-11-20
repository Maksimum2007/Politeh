#include <stdio.h>
#define N 6
void bool_multiply(int A[N][N], int B[N][N], int C[N][N]);
void bool_add(int A[N][N], int B[N][N], int C[N][N]);
void copyMatrix(int source[N][N], int dest[N][N]);
void printMatrix(int matrix[N][N]);
void runMethodPowers(int M[N][N]);
void runMethodWarshall(int M[N][N]);

void printMatrix(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void bool_multiply(int A[N][N], int B[N][N], int C[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            C[i][j] = 0;
            for (int k = 0; k < N; k++) {
                if (A[i][k] && B[k][j]) {
                    C[i][j] = 1;
                    break;
                }
            }
        }
    }
}
void bool_add(int A[N][N], int B[N][N], int C[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            C[i][j] = A[i][j] || B[i][j];
        }
    }
}

void copyMatrix(int source[N][N], int dest[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            dest[i][j] = source[i][j];
        }
    }
}

void runMethodPowers(int M[N][N]) {
    int M_star[N][N];
    int M_power[N][N];
    int Temp[N][N];

    copyMatrix(M, M_star);
    copyMatrix(M, M_power);

    printf("M^1 :\n");
    printMatrix(M_star);


    for (int k = 2; k <= N; k++) {
        bool_multiply(M_power, M, Temp);
        bool_add(M_star, Temp, M_star);
        copyMatrix(Temp, M_power);
        printf("\nM^%d:\n", k);
        printMatrix(M_power);
    }

    printf("\nResult of metod1\n");
    printMatrix(M_star);
}

void runMethodWarshall(int M[N][N]) {
    int W[N][N];
    copyMatrix(M, W);
    printf("W_0 :\n");
    printMatrix(W);
    for (int k = 0; k < N; k++) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {

                W[i][j] = W[i][j] || (W[i][k] && W[k][j]);
            }
        }

        printf("\nW_%d:\n", k + 1);
        printMatrix(W);
    }

    printf("\nResult of metod2:%d):\n", N);
    printMatrix(W);
}

int main(void) {
    int M[N][N];
    printf ("Enter masiv:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf ("%d", &M[i][j]);
        }
    }
    printf ("\n---- Metod1 ---- \n");
    runMethodPowers(M);
    printf ("\n---- Metod2 ----\n");
    runMethodWarshall(M);
    return 0;
}

