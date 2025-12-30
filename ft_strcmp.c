int ft_strcmp(const char *s1, const char *s2)
{
    int i = 0;

    while (s1[i] && s2[i] && s1[i] == s2[i])
    {

        i++;
    }
  return((unsigned char)s1[i] - (unsigned char)s2[i]);
}
#include  <stdio.h>
int main()
{
    char s1[]= "abd";
    char s2[] = "abc";

    int te = ft_strcmp(s1,s2);

    printf("%d",te);
}