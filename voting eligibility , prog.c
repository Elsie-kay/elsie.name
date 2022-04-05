//a program to determine voting eligibility based on age(18) and nationality (Kenyan)
#include<stdio.h>
int main()
{
int age;
int nat='Kenyan';
printf("enter your age");
scanf("%d",age);
printf("enter your nationality");
scanf("%d",nat);
if (age>=18) (nat='kenyan');
{
printf("eligible to vote");
}
else

{
printf("not eligible to vote");
}
return 0;
}