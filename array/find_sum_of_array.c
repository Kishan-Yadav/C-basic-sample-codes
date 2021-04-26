/*WAP to find the sum of array using recursion*/
#include<stdio.h>
#define MAX_SIZE 100
int find_sum(int arr[], int size)
{
	static int sum;
	if(size==0)
		return sum;
	else
	{
		sum = sum+arr[size-1];
		size--;
		find_sum(arr, size);
	}
}
int main()
{
	int arr[MAX_SIZE], size;
	printf("Enter the size of array:");
	scanf("%d", &size);
	printf("Enter the array elements:");
	for(int i=0; i<size; i++)
		scanf("%d",&arr[i]);
	printf("Sum of array = %d\n", find_sum(arr, size));
	return 0;
}
