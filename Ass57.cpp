//Write a program to print the first N even natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter thr first n even reverse order:");
    scanf("%d",&n);
    for(i=n;i>=2;i=i-2)
    printf("%d\n",i);
    return 0;
}