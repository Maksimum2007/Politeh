#include <math.h>
#include <stdio.h>

double f_func (double x){
    return pow(1 + x, -2.0 / 3.0);
}

void tabl_for (double a, double b, double h){
    for (double x = a; x <= b; x += h){
        printf("When x = %.4f\tresult = %.4f\n", x, f_func(x));
    }
}

void tabl_while (double a, double b, double h) {
    double x = a;
        while (x <= b) {
            printf("When x = %.4f\tresult = %.4f\n", x, f_func(x));
            x +=h;
        }
}

void tabl_dowhile (double a, double b, double h) {
    double x = a;
        do {
            printf("When x = %.4f\tresult = %.4f\n", x, f_func(x));
            x +=h;
        } while (x <= b);
}
