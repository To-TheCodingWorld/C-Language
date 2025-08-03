#include<stdio.h>

int is_Sorted(int arr[],int size);
int main()
{
    printf("Welcome to checking if array is sorted\n");
    int arr1[6]={5,6,8,9,10,26}; //increasing
    int arr2[6]={55,44,33,22,11,00}; //decreasing
    int arr3[6]={55,66,52,58,14,96}; // not Sorted

  if(is_Sorted( arr1,6)){
    printf("First Array is sorted\n");
  }
  else{
    printf("First array is not sorted\n");
  }

  if(is_Sorted( arr2,6)){
    printf("Second Array is sorte\n");
  }
  else{
    printf("Second array is not sorted\n");
  }

  if(is_Sorted( arr3,6)){
    printf("Third Array is sorted\n");
  }
  else{
    printf("Third array is not sorted\n");
  }

  return 0;
}

int is_Sorted(int arr[],int size){
    int increasing =1;
    int decreasing =1;

    for(int i=1;i<size;i++){
        if(arr[i]>arr[i-1])
            decreasing=0;
        else if(arr[i]<arr[i-1])
            increasing=0;
    }
    return increasing || decreasing;
}