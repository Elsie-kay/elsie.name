//a program to determine if a number is divisible by 5 or not
#include<stdio.h>
int main()
{
int num;
printf("enter any number");
scanf("%d",&num);
//it is true if the num is divisible by 5
if(num%5==0)
{

printf("%d \n is divisible by 5",num);
}
else
{

printf("%d \n is not divisible by 5",num);
}
return 0;
}