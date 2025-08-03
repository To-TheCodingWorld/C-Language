#include<stdio.h>
void swap();

int main(){
   int x=4,y=8;
   printf("\nx:%d ,y:%d",x,y);
   swap(x,y);
   printf("\nx:%d ,y:%d",x,y);
   swap(9,6);
    return 0;
}

void swap(int first,int second){
    int temp=first;
    first=second;
    second=temp;
    printf("\nthe first : %d , The second is : %d",first,second);
}