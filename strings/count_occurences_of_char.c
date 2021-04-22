/*WAP to count occurences of a character*/
#include<stdio.h>
int main()
{
	char str[20], search;
	int i, count=0;
	printf("Enter the string: ");
	gets(str);
	printf("Enter the character you want to search and count:");
	scanf("%c",&search);
	for(i=0; str[i]; i++)
	{
		if(str[i] == search)
			count++;
	}
	printf("There are %d occurence of character '%c' in a string \"%s\"\n", count, search, str);
	return 0;
}
