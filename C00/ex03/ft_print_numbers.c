#include <unistd.h>

void ft_print_numbers(void)
{	
	write(1, "0123456789\n", 11);

	/*
	while (n <= '9')
	{
		write(1, &n, 1);
		n++;
	}
	*/
}

int  main(void)
{
	ft_print_numbers();
	
	return 0;
}
