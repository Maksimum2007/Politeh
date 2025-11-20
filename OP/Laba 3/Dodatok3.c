#include <stdio.h>
#include <math.h>

#define N 10 

int main(void) {
    int arrA[N], arrB[N], arrC[N];
    int arrD1[N], arrD2[N], arrD3[N];
    int powD1 = 0, powD2 = 0, powD3 = 0;
    
    printf("--- Task 3: Set Operations (Variant 12) ---\n\n");
    printf("Universal Set U = {1, 2, ..., %d}.\n\n", N);

    int count, element;
    const char *setNames[] = {"A", "B", "C"};
    int *sets[] = {arrA, arrB, arrC};

    for (int k = 0; k < 3; k++) {

        for (int i = 0; i < N; i++) { sets[k][i] = 0; }

        printf("Enter count of elements for set %s (Max %d): ", setNames[k], N);
        if (scanf("%d", &count) != 1 || count < 0 || count > N) {
            printf("ERROR: Invalid count. Set is empty.\n");
            
            while (getchar() != '\n');
            continue;
        }

        printf("Enter %d unique elements for set %s (from 1 to %d):\n", count, setNames[k], N);
        for (int i = 0; i < count; i++) {
            printf("Element %d: ", i + 1);
            
            if (scanf("%d", &element) != 1) {
                printf("ERROR: Not a number. Stopping input for %s.\n", setNames[k]);
                
                while (getchar() != '\n');
                return 1; 
            }
            

            if (element < 1 || element > N) {
                printf("ERROR: Element %d is out of range [1, %d]. Re-enter.\n", element, N);
                i--; 
                continue;
            }

            
            sets[k][element - 1] = 1;
        }
        printf("\n");
    }


    
    for (int i = 0; i < N; i++) {
       
        arrD1[i] = (arrA[i] && !arrC[i]) && !arrB[i];


        arrD2[i] = !arrC[i] ^ arrB[i];

     
        int B_sym_C = (!arrB[i] ^ arrC[i]); // B' Δ C
        arrD3[i] = !arrA[i] && !B_sym_C;
    }

   
    printf("\n--- Resulting Sets and Power ---\n");
    
    int *D_sets[] = {arrD1, arrD2, arrD3};
    const char *D_names[] = {"D1", "D2", "D3"};
    int *D_powers[] = {&powD1, &powD2, &powD3};

    for (int k = 0; k < 3; k++) {
        printf("Set %s: {", D_names[k]);
        int count = 0;
        int first = 1;

        for (int i = 0; i < N; i++) {
            if (D_sets[k][i] == 1) { 
                if (!first) {
                    printf(", ");
                }
                printf("%d", i + 1); 
                first = 0;
                count++;
            }
        }
        printf("}. Power: %d\n", count);
        *D_powers[k] = count; 
    }


    
    printf("\n--- Power Set (Bulean) for D1 ---\n");
    
    if (powD1 > 4) { 
        printf("P(D1): Too large to display (2^%d subsets).\n", powD1);
    } else {
        
        int D1_elements[N];
        int k = 0;
        for (int i = 0; i < N; i++) {
            if (arrD1[i] == 1) {
                D1_elements[k++] = i + 1; 
            }
        }

        printf("P(D1) Subsets (2^%d): { { }", powD1); 
        
        // 4.2. 
        for (int i = 1; i < (1 << powD1); i++) {
            printf(", {");
            int first_element = 1;
            
            for (int j = 0; j < powD1; j++) {
                
                if (i & (1 << j)) {
                    if (!first_element) {
                        printf(", ");
                    }
                    printf("%d", D1_elements[j]);
                    first_element = 0;
                }
            }
            printf("}");
        }
        printf(" }\n");
    }

    return 0;
}