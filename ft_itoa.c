#include <stdlib.h>
int get_num_l(long nbr)
{
    int len = 0;
    if (nbr <= 0)
        len++;
    while (nbr != 0)
    {
        len++;
        nbr = nbr /10;
    }
    return len;
}


char *ft_itoa(int nbr)
{
    long nb = nbr;
    int len ;
    char * result;
    len = get_num_l(nb);

    result = malloc(sizeof(char) * (len + 1));
    if (!result)
        return NULL;
    result[len] = '\0';
    if (nb == 0)
    {
        result[0] = '0';
        return result;
    }
    if (nb < 0)
    {
        result[0] = '-';
        nb = -nb;
    }
    while (nb != 0)
    {
       --len;
       result[len] = (nb % 10) + '0';
       nb = nb /10;
    }
    
    return result;
}