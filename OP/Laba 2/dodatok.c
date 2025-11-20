#include <stdio.h>

int main() {
    int n;
    int count = 0;
    
    const int ODD_BITS_MASK = 0xAAAAAAAA; 
    
    printf("Enter number which (n >= 2): ");
    
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("You write wrong n!.\n");
        return 1;
    }

    printf("\nFound numbers:\n");

   
    for (int i = 2; i <= n; i = i + 1) { 
        

        if ((i & ODD_BITS_MASK) == 0) {
            printf("%d ", i);
            count = count + 1; 
        }
    }
    
    if (count == 0) {
        printf ("There is no numbers");
    }
    
    printf("\n\n\n", count);

    return 0;
}