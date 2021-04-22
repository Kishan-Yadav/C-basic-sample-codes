/*WAP to find the first occurence of a character*/
#include<stdio.h>
int main()
{
	char str[20], find;
	int i;
	printf("Enter the string: ");
	gets(str);
	printf("Enter the character you want to search:");
	scanf("%c",&find);
	for(i=0; str[i]; i++)
	{
		if(str[i] == find)
			break;
	}
	if(str[i]!='\0')
		printf("first occurence is at pos %d\n", i);
	else
		printf("character not found in the string\n");
	return 0;
}
	
