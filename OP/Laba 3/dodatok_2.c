#include <stdio.h>
#define N 5
int main (void){
int arr[N][N] = {
    { 1,  2,  3,  4,  5},  
    { 6,  7,  8,  9, 10},  
    {11, 12, 13, 14, 15},  
    {16, 17, 18, 19, 20},
    {21, 22, 23, 24, 25}
};
int max_value = arr[0][N-1-1];
int max_row = 0;
for (int i=1; i<N; i++){
    if (arr[i][N-i] > max_value) {
        max_value = arr[i][N-i-1];
        max_row = i;

  }
printf("%d \n", max_value);
}
int (*ptr_row)[N];

ptr_row = &arr[max_row];
printf ("\n Max row where been max index %d:\n", max_value);
int *ptr_element = *ptr_row;
for (int j = 0; j<N; j++){
    printf ("%d ", *(ptr_element +j));

}
printf ("\n");
return 0;
}
