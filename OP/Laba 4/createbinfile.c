//
// Created by maksim on 2025-10-23.
//
#include <stdio.h>

int main () {
    double X = -0.622;
    double Z = 5.541;
    FILE *file;
    file = fopen ("input_file.bin", "wb");
    if (file == NULL ) {
        printf("Can't write file!\n");
    }
    fwrite(&X, sizeof(double), 1, file);
    fwrite(&Z, sizeof(double), 1, file);
    fclose(file);
    printf ("File finished  writing");
    return 0;
}




