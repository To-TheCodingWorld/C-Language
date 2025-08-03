#include<stdio.h>

int factorial_using_loop();
int factorial_using_recursion();


int main(){
    int n=4;
    int loop=factorial_using_loop(n);
    printf("The factorial of the loop is : %d",loop);

    int recursion=factorial_using_recursion(6);
    printf("\nThe Factorial of the loop is : %d",recursion);
    return 0;

}
int fact=1;
int factorial_using_loop(int num){
    for(int i=1;i<=num;i++){
         fact = fact*i;
    }
    return fact;
}

int factorial_using_recursion(int num){
    if(num==0)
        return 1;
    else
        return num*factorial_using_recursion(num-1);
}

