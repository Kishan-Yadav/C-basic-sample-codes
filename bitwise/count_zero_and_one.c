/*WAP to count zero and one in a binary number*/
#include<stdio.h>
int main()
{
	int value, index, zeros=0, ones=0;
	printf("Enter the value:");
	scanf("%d", &value);
	for(index=31; index>=0; index--)
	{
		if((value>>index)&1)
			ones++;
		else
			zeros++;
	}
	printf("The number of ones are %d and number of zeros are %d\n", ones, zeros);
	return 0;
}

