/*WAP to find number is even or odd using bitwise operator*/
#include<stdio.h>
int main()
{
	int value;
	printf("Enter a number:");
	scanf("%d", &value);
	if(value&1)
		printf("Number is odd\n");
	else
		printf("Number is even\n");
	/*using xor*/
	if((value^1) == (value+1))
		printf("Number is even\n");
	else
		printf("Number is odd\n");
	return 0;
}
