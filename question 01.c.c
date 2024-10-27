#include<stdio.h>
#include<conio.h>

void main() 
{
    float num1, num2, result;
    char operator;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator); 
    if (operator == '+') 
	{
        result = num1 + num2;

        printf("Result: %.0f", result);
    } 
    else if (operator == '-') 
	{
        result = num1 - num2;
        
        printf("Result: %.0f", result);
    } 
    else if (operator == '*') 
	{
        result = num1 * num2;
        
        printf("Result: %.0f", result);
    } 
    else if (operator == '/') 
	{
    	
        if (num2 != 0) {
            result = num1 / num2;
            printf("Result: %.2f", result);
        } 
		else {
        	printf("Unable to divide with 0");
		}
    }
    
    else {
        printf("Invalid operator!");
    }
}
