/*WAP to find max and min element in an array using recursion*/
#include<stdio.h>
#define MAX_SIZE 100
void find_max_min(int arr[], int size, int *max, int *min)
{
	if(size==0)
		return;
	else
	{
		if(arr[size-1]> *max)
			*max = arr[size-1];
		else if(arr[size-1]<*min)
			*min = arr[size-1];
		size--;
		find_max_min(arr, size, max, min);
	}
}
int main()
{
	int arr[MAX_SIZE], size, min=0, max=0;
	printf("Enter the size of array:");
	scanf("%d", &size);
	printf("Enter the array elements:");
	for(int i=0; i<size; i++)
		scanf("%d",&arr[i]);
	min = max = arr[0];
	find_max_min(arr, size, &max, &min);
	printf("Max = %d and Min = %d\n", max, min);
	return 0;
}
