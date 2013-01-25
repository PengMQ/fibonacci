#include<stdio.h>
int fibonacci(int number)
{
	if(number < 2)
	{
		return number;
	}
	return fibonacci(number - 2) + fibonacci(number - 1);
}
int main()
{
	printf("%d\n", fibonacci(40));
	return 0;
}
