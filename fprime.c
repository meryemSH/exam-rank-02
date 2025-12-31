#include <stdlib.h>
#include <stdio.h>

int is_prime(int n)
{
    int i = 2;

    if (n < 2)
        return 0;
    
    while (i * i <= n)
    {
        if (n % i == 0) 
            return 0;
        i++;
    }
    return 1;
}

int main(int argc , char **argv)
{
    int i = 2;
    int nb = 1;
    int n = atoi(argv[1]);
    while (n > 1)
    {
        if (n % i == 0)
        {
            printf("%d" , i);
            n = n /i;
            if (n >1)
            {
                printf("*");
            }
            
        }
        else
        i++;
        
    }
}
