/*write a program to set, get, clear and toggle nth bit of a number*/
#include<stdio.h>
int main()
{
	int value, bit, index;
	printf("Enter the value:\n");
	scanf("%d", &value);
	printf("Enter the nth bit:\n");
	scanf("%d", &bit);
	printf("orignal value = ");
	for(index=31; index>=0; index--)
		printf("%d",(value>>index)&1);
	printf("\n");
	printf("%dth value is %d\n", bit, (value>>bit)&1);
	value = value&~(1<<bit);
	printf("after clearing value = ");
	for(index=31; index>=0; index--)
                printf("%d",(value>>index)&1);
	printf("\n");
	value = value|(1<<bit);
        printf("after setting value = ");
        for(index=31; index>=0; index--)
                printf("%d",(value>>index)&1);
	printf("\n");
	value = value^(1<<bit);
        printf("after toggling value = ");
        for(index=31; index>=0; index--)
                printf("%d",(value>>index)&1);
	printf("\n");
	return 0;
}
