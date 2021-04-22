/*WAP to find the length of string*/
#include<stdio.h>
int main()
{
	char str[20];
	int count=0;
	printf("Enter the string: ");
	gets(str);
	for(int i=0; str[i]; i++)
		count++;
	printf("Length of string is %d\n", count);
	return 0;
}
	
