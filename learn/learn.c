#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int main()
{

	ft_putstr("hamid");
	// int x[] = {5, 4, 3, 24, 33, 45};
	// int v[4];
	// v[0] = 1;
	// v[1] = 5;
	// char *str[] = {"hamid", "s", "test", "a", "aaa"};
	// char c[] = {'a', 'b', 'c', 'd'};
	// size_t s = 50;
	
}