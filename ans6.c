//Write a program to print all Prime numbers under 100
#include<stdio.h>
int main(){
    int x,i,flag=0;
    printf("Prime number under 100:");
    
    for(x=2;x<100;x++){
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
    
