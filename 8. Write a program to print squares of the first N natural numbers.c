//8. Write a program to print squares of the first N natural numbers
#include<stdio.h>
 int main()
 {
     int i, n;
     printf("Enter the value of n\n");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
        printf("%d\t",i*i);
     return 0;

 }
