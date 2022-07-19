//Write a program to check whether two given numbers are co-prime numbers or not
#include<stdio.h>
int main(){
    int i,n1,n2,flag=0;

    printf("enter the value of n1:");
    scanf("%d",&n1);
    printf("enter the value of n2:");
    scanf("%d",&n2);
    if(n1>n2){
        i=n2;
    }
    else
        i=n1;
    while(1){
        if((n1%i==0)&&(n2%i==0)){
        break;
        }
        i--;
    }
        if(i==1)
             printf("%d %d are co-prime with each other",n1,n2);
        else
             printf("%d %d are not co-prime with each other",n1,n2);
     
    return 0; 
    
}