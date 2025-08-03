#include<stdio.h>
int main(){
    int Student[5][6];
   for(int row=0;row<3;row++){
    for(int column=0;column<3;column++){
        printf("Enter the marks of the student : %d,Subject %d :",row+1,column+1);
        scanf("%d",&Student[row][column]);
    }
   }
    for(int row=0;row<3;row++){
    for(int column=0;column<3;column++){
        printf("%d ",Student[row][column]);
    }
    printf("\n");
   }

   return 0;
}