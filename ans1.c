//Write a program to find the Nth term of the Fibonnaci series.
#include <stdio.h>
int main()
{
    int a = 0, b = 1, c, N, flag1 = 0;
    printf("Enter the value of N:");
    scanf("%d", &N);
    for (int i = 0; i <= N; i++)
    {
        c = a + b;
        printf(" %d",c);
        a = b;
        b = c;
        flag1=1;  
    }
    if(flag1==1){
        N=c;
        printf("\n%d is the last term",N);
    }

    return 0;
}