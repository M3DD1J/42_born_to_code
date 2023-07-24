#include <unistd.h>

void	ft_print_reverse_alphabet(char z)

{
	z = 122;
		while(z >= 97 && z <= 122)
		{
			write(1, &z, 1);
			z--;
		}
}

/*
int	main()

{
	ft_print_reverse_alphabet(' ');
	return 0;
}
*/
