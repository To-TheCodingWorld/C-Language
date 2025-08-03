#include<stdio.h>
int main(){
    long kilometers;
    const float MILE_PER_KM = 0.621371;
    printf("Enter the KM : ");
    scanf("%ld",&kilometers);

    long long Result = kilometers * MILE_PER_KM;
    printf("The Distance is : %ld",Result);
    return 0;
}