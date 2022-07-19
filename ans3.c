// Write a program to check whether a given number is there in the Fibonacci series or not.
#include <stdio.h>
int main()
{
    int a = 0, b = 1, c, t1, flag1 = 0;
    printf("Enter the value of t1:");
    scanf("%d", &t1);
    for (int i = 0; i < t1; i++)
    {
        c = a + b;
        a = b;
        b = c;
        if (t1 == a)
        {
            flag1 = 1;
            break;
        }
    }
    if (flag1 == 1)
    {
        printf("%d is the terms of fibonnaci series", t1);
    }
    else
    {
        printf("%d is not the terms of fibonnaci series", t1);
    }
    return 0;
}