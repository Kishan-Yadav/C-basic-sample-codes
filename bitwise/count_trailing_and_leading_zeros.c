/*WAP to count trailing and leading zeros in a number*/
#include<stdio.h>
int main()
{
	int value, index, trailing_count=0, leading_count=0;
	printf("Enter the value:");
	scanf("%d",&value);
	/*trailing zeros*/
	for(index=0;index<=31;index++)
	{
		if((value>>index)&1)
			break;
		else
			trailing_count++;
	}
	printf("Trailing zeros count is %d\n", trailing_count);
	/*leading zeros*/
        for(index=31;index>=0;index--)
        {
                if((value>>index)&1)
                        break;
                else
                        leading_count++;
        }
        printf("leading zeros count is %d\n", leading_count);
	return 0;
}
