#include<stdio.h>

// void count_to_100();
// int sum(int,int );
void count_to_100(){
    for(int i=1;i<=100;i++){
        printf("%d ",i);
    }
}

int sum(int x , int y){
    int Add=x+y;
    return(Add);
}
int main()
{
    count_to_100();
    printf("\n");
    int Addition = sum(8,8);
    printf("The Sum is : %d",Addition);

    int a=78,b=69;
    int c=sum(a,b);
    printf("\nThe Addition is : %d",c);
    
}

// void count_to_100(){
//     for(int i=1;i<=100;i++){
//         printf("%d ",i);
//     }
// }

// int sum(int x , int y){
//     int Add=x+y;
//     return(Add);
// }