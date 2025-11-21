#include <stdio.h>
#include "func.h"
int main(void) {
    double a = 0;
    double b = 7;
    double h;
    printf ("Enter h: ");
    scanf("%lf", &h);
    void (*func[])(double, double, double) = {tabl_for, tabl_while, tabl_dowhile};
    int metod;
    printf ("Choose your metod:\n");
    scanf("%d", &metod);
    if (metod >= 1 && metod <= 3) {
        func[metod - 1](a, b, h);
        return 0;
    }
    else {
        printf ("You write a wrong metod!\n");
        return 0;
    }
}