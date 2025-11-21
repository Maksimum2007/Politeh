#define N 100
double f_drob (double arr_a[] , double arr_b[], int i, int n) {
    if (n == i){
        return arr_a[n] / arr_b[n];
    }
    else {
        double result_down = f_drob (arr_a, arr_b, i+1, n );
        return arr_a[i] / (arr_b[i] +result_down);

    }

}