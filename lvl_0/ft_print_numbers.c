#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_numbers(void)
{
    char nb;

    nb = 48;
    while (nb <= 57)
    {
        ft_putchar(nb);
        nb++;
    }
    ft_putchar('\n');
}
