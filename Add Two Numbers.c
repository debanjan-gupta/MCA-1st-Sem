#include<stdio.h>
int main()
{
    int var1,var2,sum;
    printf("Enter Addend 1: ");
    scanf("%d",&var1);
    printf("\nEnter Addend 2: ");
    scanf("%d",&var2);
    sum = (var1+var2);
    printf("\nThe Sum of given addends = %d",sum);
    return 0;
}