/*WAP to compare two strings*/
#include<stdio.h>
int main()
{
	char str1[20], str2[20];
	int i,j;
	printf("Enter the first string:");
	gets(str1);
	printf("Enter the second string: ");
	gets(str2);
	for(i=0; str1[i], str2[i]; i++)
	{
		if(str1[i]==str2[i])
			continue;
		else
			break;
	}
	if(str1[i] == '\0' && str2[i] == '\0')
		printf("String is same\n");
	else
		printf("string is not same\n");
	return 0;
}
