
#include "func.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(int array[], long pos1, long pos2)
{
    long tmp;
    tmp=array[pos1];
    array[pos1]=array[pos2];
    array[pos2]=tmp;
}
void qs_sort(int array[], long start, long end)
{
    long head=start, tail=end-1, tmp;
    long diff=end-start;
    long pe_index;
    // якщо залишилося менше двох елементів – кінець рекурсії
    if (diff<1) return;
    if (diff==1)
        if (array[start]>array[end]) {
            swap(array, start, end);
            return;
        }
    // пошук індексу розділяючого елементу pe_index
    long m=(start+end)/2;
    if (array[start]<=array[m]) {
        if (array[m]<=array[end]) pe_index=m;
        else if (array[end]<=array[start]) pe_index=start;
        else pe_index=end;
    }
    else {
        if (array[start]<=array[end]) pe_index=start;
        else if(array[end]<=array[m]) pe_index=m;
        else pe_index=end;
    }
    long pe=array[pe_index]; // сам розділяючий елемент
    swap(array,pe_index,end);

    while (1) {
        while(array[head]<pe)
            ++head;
        while(array[tail]>pe && tail>start)
            --tail;
        if (head>=tail) break;
        swap(array,head++, tail--);
    }
    swap(array,head,end);
    long mid=head;
    qs_sort(array, start, mid-1); // рекурсивний виклик для 1-ої підмножини
    qs_sort(array, mid+1, end); // рекурсивний виклик для 2-ої підмножини
}

void f_bulb (int arr[N] , int n){
    for (int i=0; i<n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap (arr, j, j+1);
            }
        }
    }
}

void gen_random_numbers(int *array, int len, int min, int max){
    for (int i = 0; i < len; i++)
        array[i] = rand() % (max - min + 1) + min;
}

void task1() {
    srand(time(NULL));
    static int numbers1[N] = {0};
    static int numbers2[N] = {0};
    gen_random_numbers(numbers1, N, 1, 200);
    for (int i = 0; i < N; i++){
        numbers2[i] = numbers1[i];
    }
    clock_t start = clock();
    qs_sort(numbers1, 0, N-1);
    clock_t end = clock();
    printf ("Time of QuickSort: \n%.5f sec\n", (double)(end-start)/CLOCKS_PER_SEC);
    start = clock();
    f_bulb (numbers2 , N);
    end = clock();
    printf ("Time of BubbleSort: %.5f sec\n", (double)(end-start)/CLOCKS_PER_SEC);

}