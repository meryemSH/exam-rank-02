#include <stdlib.h>

int *ft_rrange(int start , int end)
{
    int i = 0;
    int size;
    int *arr;

    size = (start <= end) ? (end - start + 1) : (start - end + 1);

    arr = malloc(sizeof(int) * size);
    if (!arr)
        return NULL;

    while (i < size)
    {
        arr[i] = end;
        if (start < end)
            end--;
        else
            end++;
        i++;
    }

    return arr;
    
}