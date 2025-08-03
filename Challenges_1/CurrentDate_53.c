#include<stdio.h>
#include<time.h>

void print_date();

int main(){
    print_date();
    return 0;
}

void print_date(){
    time_t current_time;
    time(&current_time);

    char* date_String = asctime(localtime(&current_time));
    printf("The Current time is : %s",date_String);
}