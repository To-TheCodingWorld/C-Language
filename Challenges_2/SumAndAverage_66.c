#include<stdio.h>

int Sum(int arr[],int size);

int main()
{
  int num[10];
  for(int i = 0; i<10;i++){
        printf("Please enter your number %d :",i+1);
        scanf("%d",&num[i]);
  }
  int Ans = Sum(num,10);
  int Average = Ans/10;
  printf("The Addition is : %d\n",Ans);
  printf("The Average is : %d",Average);
  return 0;
  
}

int Sum(int arr[],int size){
    int sum =0;
    for(int i=0;i<size;i++){
         sum = sum +arr[i];
    }
    return sum;
}