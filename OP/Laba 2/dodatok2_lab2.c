#include <stdio.h>
#include <math.h>

int main() {
    
    double A, B, h, epsilon;
    double x;

    printf("Enter A: ");
    scanf("%lf", &A);
    printf("Enter B: ");
    scanf("%lf", &B);

    printf("Enter tabl h: ");
    scanf("%lf", &h);
    
    printf("Enter pohubku");
    scanf("%lf", &epsilon);

    if (A <= -1.0 || B >= 1.0 || A >= B || h <= 0 || epsilon <= 0) {
        printf("\nError the naumber neeed to be  -1 < A < B < 1, а h > 0 and epsilon > 0.\n");
        return 1;
    }

printf("\nRESULTS TABLE:\n");
printf("-------------------------------------------------------------------------------\n");
printf("  X  \t| S_series\t| y_exact (log)\t| Delta Error  | Terms Count\n");
printf("----------------|---------------|---------------|-----------|---------------\n");
    
    // Межі виконання циклу
    for (x = A; x <= B + h/2.0; x = x + h) {
        
        double T = x;           
        double S_sum = T;       
        int k = 0;              
        int terms_count = 1;           
        // Внутрішній Цикл: Обчислення Суми (Контролює epsilon)
        while (fabs(T) > epsilon) {
            
        // Обчислення наступного доданка (T_новий, використовуючи T_старий)
        T = T * (x * x * (2.0 * k + 1.0)) / (2.0 * k + 3.0);
        
        k = k + 1;
        terms_count = terms_count + 1;
        
        S_sum = S_sum + T; 
        }

        
        double S_result = 2.0 * S_sum;  
        double y_exact = log((1.0 + x) / (1.0 - x)); 
        double delta = fabs(S_result - y_exact); 
        
    
        printf("%.4f\t| %.8f\t| %.8f\t| %.2e\t| %d\n", 
                x, S_result, y_exact, delta, terms_count);
    }
    
    printf("-------------------------------------------------------------------------------\n");
    
    return 0;
}