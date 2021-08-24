#include <stdio.h>

int main()
{
	int c, d, temp;
	int n = 20;
	int array[n];
	for (c = 0; c < n; c++)
		scanf("%d", &array[c]);

	for (c = 0 ; c < n - 1; c++)
	{
		for (d = 0 ; d < n - c - 1; d++)
		{
			if (array[d] > array[d+1])
			{
				temp = array[d];
				array[d] = array[d+1];
				array[d+1] = temp;
			}
		}
	}

	for (c = 0; c < n; c++)
		printf("%d", array[c]);
	printf("\n");
	return 0;
}