#include <stdio.h>

int main() {
    printf("Numbers:\n");
    int maxnumber1;
    scanf ("%d" , &maxnumber1 );

    for (int i = 1; i <= maxnumber1; i++ ) {
        int save = 1;
        int number = i;
        while (number>0){
            int ostacha = number % 10;
            save = save * ostacha;
            number = number / 10;
        }
        if (i == 2*(save)) {
            printf ("%d\n", i);
        }

    }

    return 0;
}