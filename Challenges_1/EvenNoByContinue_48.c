#include<stdio.h>
int main()
{
    int num;
    printf("Enter the range of the number : ");
    scanf("%d",&num);

    for(int i=0;i<=num;i++){
        if(i%2!=0){
            continue;
        }
        printf(" %d",i);
    }
}