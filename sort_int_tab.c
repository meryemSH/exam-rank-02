void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i = 0;
    int temp;
    unsigned int j;

    if (size < 2)
        return; // Nothing to sort

    while (i < size - 1)
    {
        j = 0;
        while (j < size - 1 - i)
        {
            if (tab[j] > tab[j + 1])
            {
                // Swap elements
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
}
