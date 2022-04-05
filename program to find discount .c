//a program to find discount
#include<stdio.h>
int main()
{
int amount,items,price, discount;
printf("enter amount and price");
scanf("%d", items,price);
amount=price*items;
if(amount>1000)
{
discount=amount*0.1;
amount=amount-discount;
}
printf("%d", amount);

return 0;
} 