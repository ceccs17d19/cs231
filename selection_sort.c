#include <stdio.h>

int selectionSort(int a[], int size) 
{
	int i, j, pos, temp;
	for (i=0; i<size; i++) 
	{
		pos = i;

		for (j=i; j<size; j++) 
		{
			if (a[j] < a[pos]) 
			{
				pos =j;
			}
		}
		if (i != pos) 
		{
			temp = a[i];
			a[i] = a[pos];
			a[pos] = temp;
		}
	}
}

int main() 
{
	int i, j, pos, a[100], temp, size;

	printf("Enter number of elements in the array : ");
	scanf("%d", &size);

	printf("Enter the array\n");
	for (i=0; i<size; i++) 
	{
		scanf("%d", &a[i]);
	}
	
	selectionSort(a, size);

	printf("Sorted array \n");
	for (i=0; i<size; i++) 
	{
		printf("%d\n", a[i]);
	}
}
