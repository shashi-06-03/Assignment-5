//3. Write a program to print the first N natural numbers in reverse order#include<stdio.h>
 #include<stdio.h>
 int main()
 {
    int n,i;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=n;i>0;i--)
        printf(" %d\n",i);
    return 0;
 }
