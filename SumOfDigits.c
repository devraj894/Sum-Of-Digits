#include<stdio.h>
int main(){
    int n,remainder,sum=0;
    printf("Enter any number : ");
    scanf("%d",&n);

    while(n > 0){
        remainder = n % 10;
        sum += remainder;
        n /= 10;
    }
    printf("Sum of digits is : %d",sum);

    return 0;
}