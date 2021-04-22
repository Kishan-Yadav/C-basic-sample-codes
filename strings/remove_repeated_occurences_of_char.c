/*WAP to remove all repeated occurences of a character*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[20];
	int i, j, k;
	printf("Enter the string: ");
	gets(str);
	for(i=0; str[i]; i++)
	{
		for(j=i+1; str[j]; j++)
		{
			if(str[i] == str[j])
			{
				for(k=j; str[k]; k++)
				{
					str[k]=str[k+1];
				}
				str[k]='\0';
				j--;
			}
		}
	}
	printf("Final string after removal of repeated occurences is %s\n", str);
	return 0;
}
