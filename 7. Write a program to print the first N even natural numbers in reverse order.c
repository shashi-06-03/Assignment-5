//7. Write a program to print the first N even natural numbers in reverse order
#include<stdio.h>
 int main()
 {

     int n, i;
     printf("Enter the value of n\n");
     scanf("%d",&n);
     for(i=n*2;i>=1;i-=2)
        printf("%d\n",i);
        return 0;
 }
