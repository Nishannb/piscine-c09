// check whether libft_creator.sh runs with sh libft_creator.sh
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}