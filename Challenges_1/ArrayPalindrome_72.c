#include<stdio.h>
int is_Palindrome(int arr[],int size);
int main(){
    int arr1[5]={1,2,3,2,1};
    int arr2[5]={1,1,1,1,1};
    int arr3[5]={1,2,3,4,5};
    
    printf("\nResult for an first array : %d",is_Palindrome(arr1,5));

    printf("\nResult for an Second array : %d",is_Palindrome(arr2,5));

    printf("\nResult for an Third array : %d",is_Palindrome(arr3,5));

    return 0;
}

int is_Palindrome(int arr[],int size){
    for(int i=0;i<size/2;i++){
        if(arr[i] != arr[size-1-i]){
            return 0;
        }
    }
    return 1;
}
