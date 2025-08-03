#include<stdio.h>

int main()
{
  int num[5];
  for(int i = 0; i<5;i++){
        printf("Please enter the number %d :",i+1);
        scanf("%d",&num[i]);
  }

  printf("The Reverse number is :");
  int new_num[5];
  for(int i=0;i<5;i++){
    new_num[i]=num[4-i];
    printf(" %d ",new_num[i]);
  }
  return 0;
}