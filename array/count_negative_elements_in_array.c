/*WAP to count negative elements in an array*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr=NULL, count=0, size;
	printf("Enter the size of array:");
	scanf("%d", &size);
	arr = (int *)malloc(size*sizeof(int));
	printf("Enter the array elements:");
	for(int i =0; i<size ; i++)
		scanf("%d", arr+i);
	for(int i =0; i<size; i++)
		if((*(arr+i)>>31)&1)
			count++;
	free(arr);
	arr=NULL;
	printf("Negative element count = %d\n", count);
	return 0;
}
