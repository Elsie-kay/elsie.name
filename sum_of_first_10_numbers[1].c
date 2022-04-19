// for loop
//a program to display sum of first 10 natural numbers in reverse
#include<stdio.h>
int main ()

{

 int n,sum;
printf("first 10 numbers\n");
for(n=1;n<=10;n++)
{
printf("%d\n",n);
sum+=n;
}

printf("\n sum is:%d",sum);

return 0;
}