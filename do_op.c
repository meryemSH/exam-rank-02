
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc , char **argv)
{
    if (argc != 4)
    {
        write(1,"\n",1);
        return 1;
    }

    if (argv[2][0] == '*' && argv[2][1] == '\0')
        printf("%d", atoi(argv[1]) * atoi(argv[3]));

    if (argv[2][0] == '+' && argv[2][1] == '\0')
        printf("%d", atoi(argv[1]) + atoi(argv[3]));

    if (argv[2][0] == '-' && argv[2][1] == '\0')
        printf("%d", atoi(argv[1]) - atoi(argv[3]));

    if (argv[2][0] == '/' && argv[2][1] == '\0')
        printf("%d", atoi(argv[1]) / atoi(argv[3]));
    
    if (argv[2][0] == '%' && argv[2][1] == '\0')
        printf("%d", atoi(argv[1])% atoi(argv[3]));
    return 0;
}