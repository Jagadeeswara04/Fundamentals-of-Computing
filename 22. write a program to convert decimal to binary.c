#include<stdio.h>
int main()
{
	int num, decimal, binary=0, base=1, rem;
	printf("enter a decimal number: ");
	scanf("%d", &num);
	decimal=num;
	while(num > 0)
	{
		rem=num % 10;
		binary+=rem*base;
		num/=10;
		base*=2;
	}
	printf("the binary value for the given number is: %d", binary);
}
