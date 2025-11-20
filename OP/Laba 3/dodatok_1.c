#include <stdio.h>
#define N 10
#define Z 5
int main(void) {
    int arr[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    printf("Masiv:  ");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int temp[Z];
    for (int i = 0; i < Z; i++) {
        temp[i]=arr[N-Z+i];}


    for (int i = N - 1; i >= Z; i--) {
        arr[i] = arr[i - Z];
    }

    for ( int i = 0; i < Z; i++) {
    arr[i]=temp[i]; }
    
    printf("Edit Masiv:  ");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}