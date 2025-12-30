// int get_value(char c)
// {
//     if (c >= '0' && c <= '9')
//         return (c - '0');
//     if (c >= 'a' && c <= 'f')
//         return (c - 'a' + 10);
//     if (c >= 'A' && c <= 'F')
//         return (c - 'A' + 10);
//     return (-1);
// }

// int ft_atoi_base(const char *str, int str_base)
// {
//     int i = 0;
//     int sign = 1;
//     int result = 0;
//     int value;

//     if (str_base < 2 || str_base > 16)
//         return (0);

//     if (str[i] == '-')
//     {
//         sign = -1;
//         i++;
//     }

//     while (str[i])
//     {
//         value = get_value(str[i]);
//         if (value < 0 || value >= str_base)
//             break;
//         result = result * str_base + value;
//         i++;
//     }
//     return (result * sign);
// }







int get(char c)
{
    if (c >= '0' && c <='9')
        return(c - '0');
    if (c >= 'a' && c <= 'f')
        return(c - 'a' + 10);
    if (c >= 'A' && c <= 'F')
        return(c - 'A' + 10);
    return(-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int sign = 1;
    int results = 0;
    if (str_base < 2 || str_base > 16)
    {
        return 0;
    }
    
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
        {
            sign = -1;
        }
        i++;
    }
    while (str[i])
    {
       int value = get(str[i]);
       if (value < 0 || value >= str_base)
            break;
        results = results * str_base + value;
       i++;
    }
    
return results * sign;
}



#include <stdio.h>

int main(void)
{
    printf("Base 10:\n");
    printf("ft_atoi_base(\"123\", 10) = %d\n", ft_atoi_base("123", 10));
    printf("ft_atoi_base(\"-456\", 10) = %d\n", ft_atoi_base("-456", 10));

    printf("\nBase 2:\n");
    printf("ft_atoi_base(\"1011\", 2) = %d\n", ft_atoi_base("1011", 2));
    printf("ft_atoi_base(\"-1101\", 2) = %d\n", ft_atoi_base("-1101", 2));

    printf("\nBase 8:\n");
    printf("ft_atoi_base(\"17\", 8) = %d\n", ft_atoi_base("17", 8));

    printf("\nBase 16:\n");
    printf("ft_atoi_base(\"1A\", 16) = %d\n", ft_atoi_base("1A", 16));
    printf("ft_atoi_base(\"-FF\", 16) = %d\n", ft_atoi_base("-FF", 16));
    printf("ft_atoi_base(\"12FDB3\", 16) = %d\n", ft_atoi_base("12FDB3", 16));

    printf("\nBase 4:\n");
    printf("ft_atoi_base(\"123\", 5) = %d\n", ft_atoi_base("123", 5));

    return 0;
}