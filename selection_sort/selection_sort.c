#include <stdio.h>

/**
 * selection_sort - n^2 num sorting algo
 *
 * @arr: input array
 * size: size of input array
 *
 */
void selection_sort(int arr[], int size)
{
	int i, j, min_index, temp;
	for (i = 0; i < size -1 ; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[min_index])
				min_index = j;
		}
		temp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = temp;
	}
}
/**
 * main - runs tests on selection sort
 *
 * Return: 0
 */
int main(void)
{
	int testarr[] = {1, 5, 6, 32, 2, 3, 43, 21, 4, 5, 2, 1, 7, 4, 3, 2,
			 1, 4, 5, 8, 9, 12, 41,};
	int size = sizeof(testarr) / sizeof(int);
	int i;
	puts("Initial Array:");
	for (i = 0; i < size; i++)
		printf("%d ", testarr[i]);
	puts("\n");
	selection_sort(testarr, size);
	puts("Final Array:");
	for (i = 0; i < size; i++)
		printf("%d ", testarr[i]);
	puts("\n");
	return(0);
}
