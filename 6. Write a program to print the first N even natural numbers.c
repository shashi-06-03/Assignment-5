//6. Write a program to print the first N even natural numbers
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(i=2;i<=n*2;i+=2)
     printf("%d\n",i);
    return 0;

}
