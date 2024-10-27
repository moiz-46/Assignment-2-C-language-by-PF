#include<stdio.h>
#include<conio.h>

int main()
{
	float amount,discount=0.0,total_amount;
	
	printf("Enter the total shopping amount : ");
	scanf("%f",&amount);
	
	if (amount > 5000)
	{
		discount = amount * 0.20; // 20% discount 
	}
	
	else if (amount >= 3000);
	{
		discount = amount *0.10; // 10% discount
	}
	
	total_amount = amount - discount;
	
	printf("Original amount : %.2f\n",amount);
	printf("Discount: %.2f\n",discount);
	printf("Final amount after discount: %.2f\n",total_amount);
	
	return 0;
}
