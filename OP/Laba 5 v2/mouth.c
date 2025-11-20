#include <stdio.h>
int f_mouth_calculator (int x);
int f_mouth_calculator (int x) {
    int result = 0;
    switch (x) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:{
            result = 31;
            return result;
        }
        case 4: case 6: case 9: case 11:{
            result = 30;
            return result;
        }
        case 2: {
            result = 28;
            return result;
        }
        default: {
            printf ("You entered another number!");
        }
    }
}
    int main (void) {
        int x;
        printf ("Enter mouth:\n");
        scanf ("%d", &x);
        printf ("%d", f_mouth_calculator (x));
        return 0;
    }
