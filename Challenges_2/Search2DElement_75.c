#include<stdio.h>

int Search(int arr1[3][3],int row,int column , int ele);

int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    int num;
    printf("Enter the element you want to search: ");
    scanf("%d",&num);

    int occ = Search(arr,3,3,num);

    if(occ){
        printf("\nThe element is found");
    }
    else
        printf("\nThe element is not found");

    return 0;

}

int Search(int arr1[3][3],int row,int column , int ele){
    int occ=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr1[i][j] == ele){
                occ++;
            }
        }
    }
    return occ;
}