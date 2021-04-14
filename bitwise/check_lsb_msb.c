/*check whether LSB and MSB is set or not*/

#include<stdio.h>
int main()
{
	int value,i=1;
	printf("enter the number:\n");
	scanf("%d", &value);
	for(i=31;i>=0;i--)
		printf("%d",(value>>i)&1);
	printf("\n");
	if(value & 1)
		printf("LSB is set\n");
	else
		printf("LSB is not set\n");
	if((value>>31)&1)
		printf("MSB is set\n");
	else
		printf("MSB is not set\n");
	return 0;
}
