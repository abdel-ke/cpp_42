#include <iostream>

void	debug( void )
{
	std::cout << "DEBUG\n`";
}

void	info( void )
{
	std::cout << "INFO\n";
}

void	error( void )
{
	std::cout << "ERROR\n";
}

void	warning( void )
{
	std::cout << "WARNING\n";
}

void	complain(std::string level)
{
	std::string	str[] = {"debug", "info", "warning", "error"};
	void	(*test[]) (void) = {
		test[0] = &debug,
		test[1] = &info,
		test[2] = &warning,
		test[3] = &error
	};
	for (int i = 0; i < sizeof(str) / sizeof(std::string); i++)
		if (str[i] == level)
		{
			(*test[i]) ();
			return ;
		}
}

int main(int ac, char **av)
{
	complain(av[1]);
}
