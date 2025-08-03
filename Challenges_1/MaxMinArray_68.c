#include<stdio.h>

int main()
{
  int num[5];
  for(int i = 0; i<5;i++){
        printf("Please enter the number %d :",i+1);
        scanf("%d",&num[i]);
  }
    int Max = num[0];
    int Min = num[0];
    for(int i=1;i<5;i++){
        if(Max<num[i]){
            Max = num[i];
           
        }
        if(Min>num[i]){
            Min=num[i];
        }
    }
    printf("The Maximum number is : %d\n",Max);
    printf("The minimum number is : %d\n",Min);
    return  0;
}
