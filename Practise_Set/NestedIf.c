#include<stdio.h>
int main(){
    int age;
    char is_Indian;

    printf("Are you an Indian(Y/N) : ");
    scanf(" %c",&is_Indian);

    printf("Welcome to the ARTO .\n\n Please enter your age : ");
    scanf(" %d",&age);

    if(is_Indian=='Y'){
    if (age<18)
    {
        printf("You are not eligable for driving licence\n");
    }
    else if (age>=70)
    {
       printf("Your are too old, you can't apply.\n");
    }
    else
    {
      printf(" You are  eligible for driving licence\n");
    }
}
   else{
    printf("Only Indian citizen can apply \n");
}
    printf("Your age is : %d",age);
    return 0;
    
}