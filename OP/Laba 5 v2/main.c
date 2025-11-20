#include <stdio.h>
#include "func.h"
int main () {
    double x;
    int answer;
    printf ("Plese choose metod 1, or 2, or 3\n");
    scanf ("%d", &answer);
    if (answer == 1) {
        printf ("Enter x:\n");
        scanf("%lf", &x);
        if (x == -1){
            printf ("Error, you resived 0");
            return 1;
        }

        double metod_1 = calculate_1 (x);
        printf ("\nThe output for metod 1: %f", metod_1);
    }
    else if (answer == 2) {
        printf ("Enter x:\n");
        scanf("%lf", &x);
        double y_from_metod2;
        int metod_2 = calculate_2 (x, &y_from_metod2);
        printf ( "\nThe output for metod 2: %d y= %f", metod_2, y_from_metod2);
    }
    else if (answer == 3) {

        printf ("\nEnter a and b for metod 3:\n");
        double a , b , h ;
        scanf  ("%lf %lf", &a, &b);
        printf ("Enter h for %f to %f\n", a, b);
        scanf ("%lf", &h);
        calculate_tabl (h, a, b);
        return 0;
    }
    else {
    printf ("You enter another number!");
    }
}

