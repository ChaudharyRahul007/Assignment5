//Write a program to print the first N even natural number
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the first n even no:");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2)
    printf("%d\n",i);
    return 0;
}