//5. Write a program to print the first N odd natural numbers in reverse order.
#include<stdio.h>
 int main()
 {
    int n,i;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=n*2;i>=1;i--)
    {
        i=i-1;
        printf(" %d\n",i);
    }
    return 0;
 }

