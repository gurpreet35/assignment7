//Write a program to calculate HCF of two numbers
#include<stdio.h>
int main(){
    int n1,n2,i;
    printf("Enter the value of first term:");
    scanf("%d",&n1);
    printf("Enter the value of second term:");
    scanf("%d",&n2);
    if(n1>n2){
        i=n2;
    }
    else
    i=n1;
    while(1){
    if((n1%i==0)&&(n2%i==0)){
    printf("%d is the HCF of \"%d\" and \"%d\"",i,n1,n2);
    break;
    }
    i--;
    }
    return 0;
}