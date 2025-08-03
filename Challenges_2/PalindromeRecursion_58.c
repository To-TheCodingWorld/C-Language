#include<stdio.h>
int reverse(int num ,int rev);
int main()
{
    int Value;
    printf("Welcome to the Palindrome number checker....\n");
    printf("Enter the  number : ");
    scanf("%d",&Value);

    int rev=reverse(Value,0);
    if(Value==rev){
        printf("%d is Palindrome",Value);
    }
    else{
        printf("%d is not Palindrome",Value);
    }
    return 0;

}

int reverse(int num,int rev){
    if(num==0){
        return rev;
    }
    int remainder = num%10;
    int new_num = num/10;
    int new_rev=rev*10+remainder;
    return reverse(new_num,new_rev);
}