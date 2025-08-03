#include<stdio.h>

int Sum_Avrg(int arr1[3][3],int row,int column );

int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    int Sum = Sum_Avrg(arr,3,3);
    printf("The Sum of the element is : %d\n",Sum);
    printf("The Average of the element is : %d\n",Sum/10);

    return 0;
}

int Sum_Avrg(int arr1[3][3],int row,int column ){
    int Add=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++)
        {
                Add += arr1[i][j];
        }
    }
    return Add;
}