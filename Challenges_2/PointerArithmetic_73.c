#include<stdio.h>

void copy_arr(char *arr,int size,char *new_arr);
void print_arr(char *arr,int size);

int main()
{
    char arr[5] ={'B','C','R','E','C'};
    char new_arr[5];

    printf("The Orginal char array is : ");
    print_arr(arr,5);
    copy_arr(arr,5,new_arr);
    printf("\nThe new char array is : ");
    print_arr(new_arr,5);
    return 0;
}

void print_arr(char *arr,int size)
{
    for(int i=0;i<size ;i++){
        printf("%c",arr[i]);
    }
}

void copy_arr(char *arr,int size,char *new_arr)
{
    for(int i=0;i<size;i++){
       *new_arr = *arr;
       *new_arr++;
       *arr++;
    }
}