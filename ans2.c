//Write a program to print first N terms of Fibonacci series
#include <stdio.h>
int main()
{
    int a = 0, b = 1, n,c;
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("%d %d",a,b);
    for (int i = 1; i <=(n-2); i++)
    {
        c = a + b;
        printf(" %d",c);
        a = b;
        b = c;
    }
    return 0;
}