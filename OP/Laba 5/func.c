#include <stdio.h>
#include <math.h>
#include "func.h"

double calculate_1 (double x){
    if (x == -1.0) {
        printf("Error: Division by zero!\n");
        return 0.0;
    }
    double square;
    square = (x+1)*(x+1);
    double root = cbrt (square);
    double result = 1 / root;
    return result;
}

int calculate_2 (double x, double *result_of_metod2){
    double result = calculate_1 (x);
    *result_of_metod2 = result;
    if (result < 0){
        return -1;
    }
    if (result == 0){
        return 0;
    }
    if (result > 0){
        return 1;
    }
}

void calculate_tabl (double h, double a, double b) {
    for (double i = a; i <= b; i=i+h){
        if (i == -1){
            printf ("\nError when x = -1\n");
            return;
        }
        double result_metod1 = calculate_1(i);
        double y_from_metod2;
        int  sign_metod2 = calculate_2 (i, &y_from_metod2);
        printf ("When x = %f\t| Metod1=%f\t| Metod2=%f\t| Sign=%d\n", i, result_metod1, y_from_metod2, sign_metod2);
    }
}