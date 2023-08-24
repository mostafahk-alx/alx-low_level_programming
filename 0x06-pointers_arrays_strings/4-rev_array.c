/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers.
 * @n: The number of elements in the array.
 *
 * Description: This function reverses the content of the given array of
 * integers. It swaps the elements at the beginning and the end of the array,
 * then moves inward until the middle of the array is reached.
 */
void reverse_array(int *a, int n)
{
	int temp, start = 0, end = n - 1;

	while (start < end)
	{
		temp = a[start];   /* Swap elements at start and end */
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
