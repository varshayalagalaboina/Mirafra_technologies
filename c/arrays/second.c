#include <stdio.h>

int main()
{
//	int arr[10];
	int i, n;
	int first = 0;
	int second = 0;

	printf("enter n value\n :");
	scanf("%d", &n);
	int arr[n];
	for (i = 0; i < n; i++) 
	{
		printf("arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n; ++i) 
	{
		if (first < arr[i])
		{
			second = first;
			first = arr[i];
		} else
			if (arr[i] > second && arr[i] != first)
			//if (arr[i] > second)
			{
				second = arr[i];
			}
		printf("%d\n",arr[i]);
	}
	printf("2n largest element:%d\n",second);
}
