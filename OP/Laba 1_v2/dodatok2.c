#include <stdio.h>
#include <math.h>
int main () {
    double x , y , z, u;
    printf ("Enter x:");

    scanf ("%lf", &x);

    printf ("Enter y:");
    scanf ("%lf", &y);

    printf ("Enter z:");
    scanf ("%lf", &z);
    
    double max_num1 =  x;
    
    if (y > max_num1) {
    max_num1 = y;
}
      if (z > max_num1) {
      max_num1 = z;
      }

      if (max_num1<19) {
        u= sqrt(fabs(x * y * z));
        printf ("u= %f", u);
      }

  else {
    u = x/ (fabs(y) + pow(z,2));
    printf ("u= %f", u);
  }
return 0;
}
