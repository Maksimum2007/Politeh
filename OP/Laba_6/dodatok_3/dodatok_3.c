#include <stdio.h>
#include <math.h>
#define F_PROG(a,r,n) ((a) * ((pow((r), ((n)-1)))))
int main () {
int a, r, n;
printf ("Enter a:\n");
scanf ("%d", &a);
printf ("Enter n:\n");
scanf ("%d", &n);
printf ("Enter r:\n");
scanf ("%d", &r);
int result = F_PROG (a, r, n);
printf ("\nThe result is: %d", result);
return 0;
}
