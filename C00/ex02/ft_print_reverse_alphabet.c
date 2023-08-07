#include <unistd.h>
//LA LETTERA  z  E'SOLO UN MEMO PER RICORDARCI COSA STIAMO GUARDANDO!
void	ft_print_reverse_alphabet(char z)

{
	z = 122;
		while(z >= 97 && z <= 122)
		{
			write(1, &z, 1);
			z--;
//QUESTA VOLTA DECREMENTO IL VALORE DI z CON [z -= 1] O BREVEMENTE [z--]
		}
}

/*
int	main()

{
	ft_print_reverse_alphabet(' ');
	return 0;
}
*/
//M3DD1J
