#include <stdio.h>

int main() {
    int p[8] = { 0, 0, 0, 0, 1, 1, 1, 1 };
    int q[8] = { 0, 0, 1, 1, 0, 0, 1, 1 };
    int r[8] = { 0, 1, 0, 1, 0, 1, 0, 1 };
    int res[8];
    int is_tautology = 1; 
    int A[8]; 
    int B[8]; 
    printf("_________________________________________________________________________________\n");
    printf("|  P  |  Q  |  R  | (P->R)V(Q->R) | (P->Q)->R |  RESULT  |\n");
    printf("_________________________________________________________________________________\n");
    for (int i = 0; i < 8; i++) {
        int p_implies_r = (!p[i] || r[i]);
        int q_implies_r = (!q[i] || r[i]);
        A[i] = p_implies_r || q_implies_r;   
       
        int p_implies_q = (!p[i] || q[i]);
     
        B[i] = (!p_implies_q || r[i]);
         
        res[i] = (!A[i] || B[i]);
       
        if (res[i] == 0) {
            is_tautology = 0;
        }
        printf("|  %d  |  %d  |  %d  |        %d        |     %d     |    %d     |\n", 
               p[i], q[i], r[i], A[i], B[i], res[i]);
    }

    printf("_________________________________________________________________________________\n");
        
    if (is_tautology) {
        printf("\nThe statement IS A TAUTOLOGY.\n");
    } else {
        printf("\nThe statement IS NOT A TAUTOLOGY, as there are false values (0).\n");
    }

    return 0;
}