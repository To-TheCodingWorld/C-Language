#include<stdio.h>
int main(){
    int i=3;
    // int *j=&i;
    int *j;
    j=&i;
    int **k;
    k=&j;
    printf("Address of i : %p\n",&i);
    printf("Address of j : %p\n",j);
    printf("Value of j : %p\n",j);
    printf("Address of j : %p\n",&j);
    printf("Value of i : %d",i);
    printf("\nValue of i : %d",*(&i));
    printf("\nValue of i : %d\n",*j);

    printf("Address of k: %p\n",&k);
    printf("Address of k :%p\n",**k);
    printf("Value of i : %d", **k);
    return 0;
}