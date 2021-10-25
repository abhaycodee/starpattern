#include<stdio.h>
#include<conio.h>
int main(){
int i,number,j;
printf("enter thhe line\n");
scanf("%d",&number);
for(i=0;i<number;i++)
{
for(j=0;j<i+1;j++)
{
printf("*");
}
printf("\n");


}
}
