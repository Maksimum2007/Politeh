#include <stdio.h>
#include <stdarg.h>
int count_digital (int num_x, int counters[]) {
    while (num_x > 0){
       int digit = num_x%10;
        num_x = num_x/10;
        counters[digit]++;
    }

}
int f_num (int num_x, ... ) {
    va_list args;
    int counter[10] = {0};
    va_start(args, num_x);




    while (true) {
        int next_num_from_list = va_arg(args, int);
        if (next_num_from_list == -1){
            break;
        }
        // while (next_num_from_list>0) {
        //     digit = next_num_from_list % 10;
        //     next_num_from_list = next_num_from_list / 10;
        //     counter[digit]++;
        // }
        count_digital(next_num_from_list, counter);
    }
    va_end(args);
    for (int i=1; i<10; i++){
        printf ("\tNumber %d are %d\n ", i, counter[i]);
    }
}