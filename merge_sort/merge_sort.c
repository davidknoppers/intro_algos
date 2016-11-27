#include<stdio.h>
#include<stdlib.h>
/**
 * print_array - prints an array in typical ", " form
 * Return: none
 */
void print_array(int *array, int length)
{
        int i;
        for (i = 0; i < length; i++)
        {
                if (i != length - 1)
                        printf("%d, ", array[i]);
                else
                        printf("%d\n", array[i]);
        }
}
void merge(int *array, int *left, int left_count, int *right, int right_count) {
	int i, j, k;

	i = 0; j = 0; k =0;

	while(i < left_count && j < right_count)
{
		if(left[i]  < right[j])
			array[k++] = left[i++];
		else
			array[k++] = right[j++];
}
	while(i < left_count)
		array[k++] = left[i++];
	while(j < right_count)
		array[k++] = right[j++];
}

void merge_sort(int *array, int len)
{
	int mid, i, *left, *right;
	if (len < 2)
		return;
	mid = len / 2;

	left = (int*)malloc(mid * sizeof(int));
	right = (int*)malloc((len - mid) * sizeof(int));

	for(i = 0; i < mid; i++)
		left[i] = array[i];
	for(i = mid; i < len; i++)
		right[i - mid] = array[i];

	merge_sort(left, mid);
	merge_sort(right, len - mid);
	merge(array, left, mid, right, len - mid);
        free(left);
        free(right);
}

int main()
{
	int array[] = {22, 1, 2, 3, 1, 31, 12, 32, 6, 45,
		       13, 3, 1, 54, 65, 34, 2, 7, 11};
	int i, number_of_elements;

	number_of_elements = sizeof(array)/sizeof(int);
	print_array(array, number_of_elements);
	merge_sort(array, number_of_elements);
	print_array(array, number_of_elements);
	return (0);
}
