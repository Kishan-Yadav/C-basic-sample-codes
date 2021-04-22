/*WAP to copy one string to another*/
#include<stdio.h>
int main()
{
	char str1[20], str2[20];
	int i;
	printf("Enter the first string:");
	gets(str1);
	for(i=0; str1[i]; i++)
		str2[i]= str1[i];
	str2[i]= '\0';
	printf("String after copying is %s\n", str2);
	return 0;
}
