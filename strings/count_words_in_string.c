/*WAP to count words in a strings*/
#include<stdio.h>
int main()
{
	char str[100];
	int i,count=1;
	printf("Enter the first string:");
	gets(str);
	if(str[0]=='\0')
	{
		printf("String is empty\n");
		return 0;
	}
	for(i=0; str[i]; i++)
		if(str[i]==' ')
			count++;
	printf("Total number of words is a string is %d\n", count);
	return 0;
}
