/*WAP to delete negative elements in an array*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[100], size, i, j, k;
	printf("Enter the size of array:");
	scanf("%d", &size);
	printf("Enter the array elements:");
	for(i =0; i<size ; i++)
		scanf("%d", &arr[i]);
	for(i=0; i<size; i++)
	{
		for(j=i+1; j<size; j++)
		{
			if(arr[j] == arr[i])
			{
				for(k=j; k<size-1; k++)
					arr[k] = arr[k+1];
				size--;
				j--;
			}
		}
	}
	printf("After deleting duplicate array elements array is as follows:\n");
	for(i=0;i<size; i++)
		printf("%d\n", arr[i]);
	return 0;
}
