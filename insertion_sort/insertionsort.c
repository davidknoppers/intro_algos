#include <stdio.h>
/**
 * printarray - prints an array in the standard comma-and-space format
 * ends with a newline
 * Return: none
 */
void print_array(int *array, int length)
{
	int i;
        for (i = 0; i < length; i++)
        {
                if (i != length -1)
                        printf("%d, ", array[i]);
                else
                        printf("%d\n", array[i]);
        }
}
/**
 * main - sorts an array using insertion sort, n^2 time but on avg faster than bubble/selection
 * Iterates through array - 1, then array - 2, and so on
 * Sends an index back to the start of array, swapping values as neccessary to 'insert' each value
 * Return: none
 */
int main(void)
{
	int i, j, temp, hole;
/*
	int array[] = {1, 2, 3, 4, 3, 2, 2, 1, 4, 5, 3, 6, 7, 3, 7, 5, 3, 2, 1,
		       1, 7, 12, 54, 1, 3, 43, 64, 1, 4, 5, 23, 53, 5, 9, 10, 1,
		       87, 2, 4, 7, 2, 12, 53, 5, 12, 34, 43, 23, 65, 43, 12};
*/
	int array[] = {1, 2, 5, 2, 4, 6, 1, 11, 4, 1};
	int array_length = sizeof(array) / sizeof(int);

	printf("Original array:\n");
	print_array(array, array_length);

	for (i = 1; i < array_length; i++)
	{
		temp = array[i];
		hole = i;
		while (hole > 0 && array[hole - 1] > temp)
		{
			array[hole] = array[hole - 1];
			hole--;
		}
		array[hole] = temp;
/*temporary printf to help me understand what my code is doing */
		print_array(array, array_length);
	}

	printf("New array:\n");
	print_array(array, array_length);
	return (0);
}
