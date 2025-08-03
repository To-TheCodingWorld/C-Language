#include<stdio.h>

void is_sorted(int arr1[],int size1 ,int arr2[],int size2, int arr3[],int size3);
void print_sorted(int arr[],int size);

int main()
{
    int arr[5]={1,2,6,8,15};
    int new_arr[5]={7,8,10,22,31};
    int sort_arr[10];

    printf("Welcome to the two sorted array...\n");
    is_sorted(arr,5,new_arr,5,sort_arr,10);
    printf("The Sorted array is :" );
    print_sorted(sort_arr,10);

    return 0;
}
void print_sorted(int arr[],int size){ 
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
}

void is_sorted(int arr1[],int size1 ,int arr2[],int size2, int arr3[],int size3)
{   int i=0,k=0,j=0;
    while(k<size3)
    {
        if(j==size2 || (i<size1 && arr1[i]<arr1[j])){
            arr3[k]=arr1[i++];
        }
        else{
            arr3[k]=arr2[j++];
        }





    // if(j==size1){
    //     arr3[k]=arr1[i++];
    // }
    // else if(i==size2){  
    //     arr3[k]=arr2[j++];
    // }
    // else if(arr1[i]<arr2[j]){
    //     arr3[k]=arr1[i++];
    // }
    // else{
    //     arr3[k]=arr2[j++];
    // }
    }
    printf("The sorted array is :%d",arr3[k]);
}


