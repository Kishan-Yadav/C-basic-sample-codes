/*WAP to concatenate two string*/
#include<stdio.h>
int main()
{
	char str1[20], str2[20], result[40];
	int i,j;
	printf("Enter the first string:");
	gets(str1);
	printf("Enter the second string: ");
	gets(str2);
	for(i=0; str1[i]; i++)
		result[i]= str1[i];
	for(j=0;str2[j];j++,i++)
		result[i]=str2[j];
	result[i]= '\0';
	printf("String after copying is %s\n", result);
	return 0;
}
