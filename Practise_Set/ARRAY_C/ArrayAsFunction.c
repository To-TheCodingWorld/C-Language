#include<stdio.h>
void printmarks(int mark[], int no_of_Student);

int main()
{
    
    int mark[5];
    int no_of_Student=5;
    for(int i=0;i<no_of_Student;i++){
        printf("Please enter marks for student %d:",i+1);
        scanf("%d",& mark[i]);
    }
    

    // for(int i = 0;i<no_of_Student;i++){
    //     printf("Marks of student is %d  : %d\n",(i+1),mark[i]);
    // }
    printmarks(mark,no_of_Student);
    return 0;

}

void printmarks(int mark[], int no_of_Student){
      for(int i = 0;i<no_of_Student;i++){
        printf("Marks of student is %d  : %d\n",(i+1),mark[i]);
    }
}