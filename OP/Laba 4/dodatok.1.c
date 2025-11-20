//
// Created by maksim on 2025-10-22.
//
#include <stdio.h>
#include <time.h>
#include <math.h>

void log_event(const char *message){
time_t sec_now = time(NULL);
struct tm *time_info = localtime(&sec_now);
char time_str[100];
strftime(time_str, sizeof(time_str), "%Y.%m.%d %H:%M:%S", time_info);
FILE *log_file = fopen("log.txt", "a");
if (log_file != NULL){
fprintf(log_file, "[%s] %s\n", time_str, message);
fclose(log_file);
}
else {
printf("Failed to open log file");
}
}


int main (void) {
log_event("Program Started.");
char input_filename[100];
FILE *input_ptr;
double x , y , z ;
printf("Enter Input File Name:\n ");
scanf("%s", input_filename);
input_ptr = fopen(input_filename, "rb");
if (input_ptr == NULL){
printf("File cannot be opened");
return 1;
}
log_event("File Opened");
fread (&x, sizeof(double), 1, input_ptr );
fread (&y, sizeof(double), 1, input_ptr);
fread (&z, sizeof(double), 1, input_ptr);
fclose(input_ptr);
char msg_log[100];
sprintf(msg_log, "Read parameters: x=%.2f y=%.2f z=%.2f", x, y, z);
double b;
b = x * (atan(z) + exp(x + 3));
char calc_msg[100];
sprintf(calc_msg, "Expression calculated. Result = %.2f", b);
log_event(calc_msg);
char output_filename[100];
printf("Enter Output File Name:\n ");
scanf("%s", output_filename);
FILE *output_ptr = fopen(output_filename, "wb");
char format_choice[100];
printf("Enter Output Format w or b:\n ");
scanf("%s", format_choice);
if (format_choice == "b"){
    FILE *output_ptr = fopen(output_filename, "wb");
    }
    else {
        FILE *output_ptr = fopen(output_filename, "w");
        }

if (output_ptr == NULL){
printf("File cannot be opened");
return 1;
}
fwrite(&b, sizeof(double), 1, output_ptr);
log_event("Write Success");
fclose(output_ptr);
log_event("Program Ended.");
return 0;
}
