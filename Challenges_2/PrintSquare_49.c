#include<stdio.h>
int main(){
    // int num , square = 1;
    // do
    // {
    //     printf("Enter the number : ");
    //     scanf("%d",&num);
    //     printf("%d \n",num*num);
    //     if(num==(-1))
    //         break;
    // } while (1);


    int num;
    while(1){
        printf("Enter the number : ");
        scanf("%d",&num);
        if (num==(-1))
            break;
        printf("%d \n",num*num);  
    }
    return 0;
}