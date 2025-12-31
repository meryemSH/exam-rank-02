#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int i;
	int size;
	int *arr;

	i = 0;
	size = (start <= end) ? (end - start + 1) : (start - end + 1);
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return NULL;
	while (i < size)
	{
		if (start <= end)
			arr[i] = start + i;
		else
			arr[i] = start - i;
		i++;
	}

	return (arr);
}