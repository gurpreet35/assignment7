//Write a program to print all Prime numbers between two given numbers
#include <stdio.h>
int main()
{
    int i ,x,a,b,flag=0;
    printf("Enter the value of first number:");
    scanf("%d",&a);
    printf("Enter the value of second number:");
    scanf("%d",&b);
    printf("Prime numbers between two \'%d\' and \'%d\' numbers:",a,b);
    for(x=a;x<b;x++){
    for ( i = 2; i < x; i++)
    {
        if (x%i==0)
        {
            flag=1;
            break;
        }
        else
        flag=0;
    }
        if(flag==0)
        printf(" %d",i);
    }
        return 0;
    }