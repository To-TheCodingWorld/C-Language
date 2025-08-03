#include<stdio.h>
int main()
{
    
    int mark[5];
    for(int i=0;i<5;i++){
        printf("Please enter marks for student %d :",i+1);
        scanf("%d",& mark[i]);
    }
    

    for(int i = 0;i<5;i++){
        printf("Marks of student is %d  : %d\n",(i+1),mark[i]);
    }
    return 0;

}