#include<stdio.h>
void swap(int* ,int*);

int main(){
int x=4,y=6;
printf("Value of x: %d \n Value of y: %d\n",x,y);
swap(&x ,&y);
printf("Value of x: %d\n Value of y: %d\n",x,y);
return 0;
}

void swap(int* ptr1,int* ptr2){
    printf("Value of ptr1: %d \n Value of ptr2: %d\n",*ptr1,*ptr2);
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("Value of ptr1: %d \n Value of ptr2: %d\n",*ptr1,*ptr2);
}