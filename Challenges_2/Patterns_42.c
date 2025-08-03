#include<stdio.h>
int main()
{
    printf("Welcome to the patterns Drawing.....\n");

    printf("Right Half Pyramid");
    for(int i=0;i<=5;i++){
        for (int j = 0;j<i;j++){
            printf("* ");
        }
     printf("\n");
    }
    
    printf("Reverse right Half Pyramid\n\n");
    for(int i=0;i<=5;i++){
        for(int j=5;j>i;j--){
            printf(" *");
        }
        printf("\n");
    }

    printf("Left half Pyramid");
    for(int i=0;i<=5;i++){
        for(int k=5;k>i;k--){
            printf("  ");
        }
        for(int j=0;j<i;j++){
            printf(" *");
        }
        printf("\n");
    }
        return 0;
}