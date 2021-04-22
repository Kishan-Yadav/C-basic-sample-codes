/*WAP to reverse a string*/
#include<stdio.h>
int main()
{
	char str[20], result[20];
	int i,j;
	printf("Enter the string: ");
	gets(str);
	for(i=0; str[i]; i++)
		;
	for(j =0, i=i-1; i>=0; j++, i--)
		result[j]=str[i];
	result[j]='\0';
	printf("String after reversing = %s\n", result);
	return 0;
}
