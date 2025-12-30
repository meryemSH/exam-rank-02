#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0;

    while (s[i])
    {
        size_t j = 0;
        while (reject[j])
        {
            if (s[i] == reject[j])
            {
                return(i);
            }
            j++;
            
        }
        i++;
    }
    return(i);
}

#include  <stdio.h>
int main()
{
    char s1[]= "abrtpjo";
    char s2[] = "chjd";

    int te = ft_strcspn(s1,s2);

    printf("%d",te);
}