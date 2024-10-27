#include<stdio.h>
int main(){
	int num1, num2, num3;
	printf("enter three numbers\n");
	printf("enter number1=");
	scanf("%d",&num1);
	printf("enter number2=");
	scanf("%d",&num2);
	printf("enter number3=");
	scanf("%d",&num3);
	if (num1 >= num2){
	 if(num1 >= num2)
	 {
	  printf("the largest number is : %d\n", num1);
}   
    else
    {
    	 printf("the largest number is : %d\n",num3);
	}
}
	if (num2 >= num3){
		printf("the largest number is : %d\n",num2);
	}  
	else
	{
		printf("the largest number is : %d\n",num3);
	}
	return 0;
}
