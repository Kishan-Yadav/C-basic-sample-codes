/*WAP to get highest and lowest bit of a number*/
#include<stdio.h>
int main()
{
	int value, index;
	printf("Enter the value:");
	scanf("%d", &value);
	printf("original value= ");
	for(index =31; index>=0; index--)
		printf("%d",(value>>index)&1);
	printf("\n");
	/*getting the highest set bit of the value*/
	for(index=31; index>=0; index--)
	{
		if((value>>index)&1)
		{
			printf("%dth bit is the highest set bit\n", index);
			break;
		}
	}
	/*getting the lowest set bit of the value*/
	for(index=0; index<=31; index++)
        {
                if((value>>index)&1)
                {
                        printf("%dth bit is the lowest set bit\n", index);
                        break;
		}
        }
	if(index<0)
                printf("There is no set bit in the number\n");
	return 0;
}

