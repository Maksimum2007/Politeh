#include <stdio.h>
#include <string.h>
#define N 150
//
// Created by maksim on 2025-10-23.
//
int main () {
    char string[N];
    char letter;
    printf ("Enter your sentence: ");
    fgets (string,N,stdin);
    printf ("Enter letter:");
    scanf(" %c", &letter);

    const char *limits = " .,;:!?\t\n";
    char *ptr;
    char result_string[N]="";

    ptr = strtok (string, limits);
    while (ptr != NULL) {
        int letter_in_word = 0;
        for (int i = 0 ; ptr[i] != '\0'; i++) {
            if ( ptr[i] == letter){
                letter_in_word = 1;
                break;
            }
        }
            if (letter_in_word == 0){
                strcat (result_string,ptr );
                strcat (result_string," ");
            }
            ptr = strtok (NULL, limits);
        }
    printf ("%s",result_string);
return 0;
}








