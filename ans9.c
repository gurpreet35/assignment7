//Write a program to check whether a given number is an Armstrong number or not
#include<stdio.h>
int main(){
    int x,r,temp,sum=0;
    printf("Enter your number:");
    scanf("%d",&x);
    temp=x;
    while(x>0)
    {
        r=x%10;
        sum=sum+r*r*r;
        x=x/10;
    }
    if(temp==sum){
        printf("\"%d\" Number is Armstrong",temp);
    }
    else
        printf("\"%d\" Number is not Armstrong",temp);
    return 0;
}
