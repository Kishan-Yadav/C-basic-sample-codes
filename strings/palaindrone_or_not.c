/*WAP to find string is palaindrone or not*/
#include<stdio.h>
int main()
{
	char str1[20], str2[20];
	int i,j;
	printf("Enter the string: ");
	gets(str1);
	for(i=0; str1[i]; i++)
		;
	for(j =0, i=i-1; i>=0; j++, i--)
		str2[j]=str1[i];
	str2[j]='\0';
	for(i=0; str1[i], str2[i]; i++)
	{
		if(str1[i]==str2[i])
			continue;
		else
			break;
	}
	if(str1[i] == '\0' && str2[i] == '\0')
		printf("string is palaindrone\n");
	else
		printf("String is not palaindrone\n");
	return 0;
}
