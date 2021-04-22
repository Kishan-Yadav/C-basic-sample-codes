/*WAP to remove all occurences of a character*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[20], remove;
	int i, j, count=0;
	printf("Enter the string: ");
	gets(str);
	printf("Enter the character you want to remove from the string:");
	scanf("%c",&remove);
	for(i=0; str[i]; i++)
	{
		if(str[i] == remove)
		{
			for(j=i; str[j]; j++)
				str[j]=str[j+1];
			str[j]= '\0';
			i--;
		}
	}
	printf("Final string after removal of occurences is %s\n", str);
	return 0;
}
