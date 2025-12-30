#include <unistd.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    int j = 0;
    int found ;

        while (s[i])
        {
            j=0;
            found = 0;
            while (accept[j])
            {
                if (s[i] == accept[j])
                {
                        found = 1;
                        break;
                }
                j++;
            }
            if (found == 0)
                return i;
            i++;
        }

    return (i);
} 

#include  <stdio.h>
int main()
{
    char s1[]= "2131345";
    char s2[] = "123";

    int te = ft_strspn(s1,s2);

    printf("%d",te);
}