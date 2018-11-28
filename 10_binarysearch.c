#include <stdio.h>

int selsort(int a[], int n) 
{
	int i, j, pos, temp;
	for (i=0; i<n; i++) 
	{
		pos = i;

		for (j=i; j<n; j++) 
		{
			if (a[j] < a[pos]) 
			{
				pos =j;
			}
		}
		if (i != pos) 
		{
			temp = a[i];
			a[i] =a[pos];
			a[pos] = temp;
		}
	}
}

int main() 
{
	int i, beg, mid, last, found=0, a[100], ele, n;

	printf("Enter number of elements : ");
	scanf("%d", &n);

	printf("Enter elements\n");
	for (i=0; i<n; i++) 
	{
		scanf("%d", &a[i]);
	}

	selsort(a, n);

	printf("Sorted array\n");
	for (i=0; i<n; i++) {
		printf("%d\n", a[i]);
	}
	printf("Enter element to search : ");
	scanf("%d", &ele);

	beg = 0;
	last = n-1;
	while (last >= beg) 
	{
		mid = (beg + last)/2;
		if (a[mid] == ele) 
		{
			found = 1;
			break;
		} 
		else if (a[mid] > ele) 
		{
			last = mid - 1;
		} 
		else 
		{
			beg = mid + 1;
		}
	}

	if (found) 
	{
		printf("Element found at position %d\n", mid+1);
	} 
	else 
	{
		printf("Element not found\n");
	}
}
