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
 * main - sorts an array using bubble sort, approximately n^2 time
 * Iterates through the entire array, then through the array -1, then -2, and so on
 * Swaps integers when int on left > int on right
 * Return: none
 */
int main(void)
{
	int i, j, k, temp, flag;

	int array[] = {1, 2, 3, 4, 3, 2, 2, 1, 4, 5, 3, 6, 7, 3, 7, 5, 3, 2, 1,
		       1, 7, 12, 54, 1, 3, 43, 64, 1, 4, 5, 23, 53, 5, 9, 10, 1,
		       87, 2, 4, 7, 2, 12, 53, 5, 12, 34, 43, 23, 65, 43, 12};
	int array_length = sizeof(array) / sizeof(int);

	printf("Original array:\n");
	print_array(array, array_length);
	flag = 0;
	for (i = 0; i < array_length; i++)
	{
		for (j = 0; j < array_length - i - 1; j++)
		{
			if (array[j] > array[j+1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag = 1;
			}
		}
	if (flag == 0)
	{
	printf("flag triggered\n");
	break;
	}

	}
	printf("New array:\n");
	print_array(array, array_length);
	return (0);
}
