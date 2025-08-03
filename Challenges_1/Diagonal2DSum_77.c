#include<stdio.h>

int diagonal(int arr1[3][3],int row,int column );

int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    int Sum = diagonal(arr,3,3);

    printf("The Sum of the diagonal element is : %d\n",Sum);
    return 0;
}

int diagonal(int arr1[3][3],int row,int column ){
    int Add=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++)
        {
            if(arr1[i]==arr1[j] || arr1[i+j] == arr1[2])
            {
                Add += arr1[i][j];
            }
        }
    }
    return Add;
}