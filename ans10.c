// Write a program to check whether a given number is an Armstrong number or not
#include <stdio.h>
int main()
{
    int x, r, count, temp = 0, sum = 0;

    for (x =0; x <= 1000; x++)
    {
        temp = x;
        sum = 0;
        while (temp > 0)
        {
            r = temp % 10;
            sum = sum + r * r * r;
            temp = temp / 10;
        }
        if (x == sum)
        {
            printf("\"%d\" Number is Armstrong\n",x);
        }
    }
    return 0;
}
