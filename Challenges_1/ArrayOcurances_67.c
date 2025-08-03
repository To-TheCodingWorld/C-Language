#include<stdio.h>

int occur(int arr[],int size,int isNum);

int main()
{
  int num[10];
  for(int i = 0; i<10;i++){
        printf("Please enter the number %d :",i+1);
        scanf("%d",&num[i]);
  }
    int num1;
    printf("Enter the number you want to search :" );
    scanf("%d",&num1);


    int Occurances = occur(num,10,num1);
    printf("The occurances are : %d",Occurances);
  return 0;
  
}

int occur(int arr[],int size,int isNum){
    int count=0;
    for(int i=0;i<size;i++){
         if(arr[i]==isNum){
             count+=1;
         }   
    }
    return count;
}