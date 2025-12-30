#include <stdio.h>

int		max(int* tab, unsigned int len)
{
    int i = 0;
    if (len == 0)
        return 0;
    int max = tab[0];

    while (i < len)
    {
        if (tab[i] > max)
        {
            max = tab[i];
        }
        i++;
    }
    return max;
}

int main()
{
    int tab[]={};
    int ma= max(tab, 0);

    printf("%d",ma);
}