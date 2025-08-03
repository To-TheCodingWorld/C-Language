#include<stdio.h>
void minmax(int*,int*,int* ,int*);

int main(){
    int x,y,min,max;
    printf("Enter 1st number : ");
    scanf("%d",&x);
    printf("Enter 2nd number : ");
    scanf("%d",&y);

    minmax(&x,&y,&min ,&max);
    return 0;
}

void minmax(int *a,int *b,int *min ,int *max)
{
    if(*a>*b){
        *max = *a;
        printf("The Max is : %d",*max);
    }
    else{
        *min = *b;
        printf("The Min is : %d",*min);
    }
}