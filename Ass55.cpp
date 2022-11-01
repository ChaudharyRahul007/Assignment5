//Write a program to print the first N odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a N odd reverse order:");
    scanf("%d",&n);
    for(i=n-1;i>=1;i=i-2)
    {
        printf("%d\n",i);
    }
    return 0;
}