

#include <stdio.h>
#define N 10
int main(void) {
    
    int arrA[N] = {1, 1, 1, 1, 1, 1, 1, 0, 0, 0}; 
    int arrB[N] = {0, 0, 0, 0, 1, 1, 1, 1, 1, 1}; 
    int arrC[N] = {1, 1, 1, 0, 0, 0, 0, 1, 1, 1}; 

    int arrD2[N], arrD3[N]; 

    for (int i = 0; i < N; i++) {
        

        arrD2[i] = !arrC[i] ^ arrB[i];


        int XorPart = (!arrB[i] ^ arrC[i]); 
        arrD3[i] = !arrA[i] & !XorPart;
    }

    
    printf("\n D2: {");
    for (int i = 0; i < N; i++) {
        printf("%d", arrD2[i]);
        if (i < N - 1) {
            printf(", ");
        }
    }
    printf("}\n");

    
    printf(" D3: {");
    for (int i = 0; i < N; i++) {
        printf("%d", arrD3[i]);
        if (i < N - 1) {
            printf(", ");
        }
    }
    printf("}\n");
    

    printf("\n--- Bulean ---\n");
    printf("D3 has is empry set: {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}).\n");
    printf("Power Set P(D3) = P(empty set): { { } }\n");

    return 0;
}