#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str)
{
    int i =0;
    int k= 0;
    int j = 0;
    int words = 0;
    int start = 0;
    int end = 0;
    char **res;

    while (str[i])
    {
        if ((str[i] >= 33 && str[i]<= 126) && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\n' || str[i + 1] == '\0'))
            words++;
        i++;
    }
    
    res = malloc(sizeof(char *) * (words + 1));

    i = 0;

    while (str[i])
    {
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        {
            i++;
        }
        start = i;
        while (str[i] >= 33 && str[i]<= 126)
        {
            i++;
        }
        end = i - start;

        res[j] = malloc(end + 1);
          k = 0;
        while (k < end)
        {
            res[j][k] = str[start];
            k++;
            start++;
        }
        res[j][k] = '\0';
        j++;
    }
    
    res[j] = NULL;
    return res;
}

int	main(void)
{
	char	**tab;
	int		i;

	tab = ft_split("  hello\tworld\n42-piscine + test");
	i = 0;
	while (tab[i])
		printf("[%s]\n", tab[i++]);
}