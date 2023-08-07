#include <unistd.h>

void	ft_ultimate_ft(int *********nbr)

{
	*********nbr = 42;
}

#include <stdio.h>

int	main()

{
//	int	n;
	
	int	*nbr8;
	int	**nbr7;
	int	***nbr6;
	int	****nbr5;
	int	*****nbr4;
	int	******nbr3;
	int	*******nbr2;
	int	********nbr1;
	int	*********nbr, nbrflex;

//	n = 0;
	
	nbr = &nbr1;
	nbr1 = &nbr2;
	nbr2 = &nbr3;
	nbr3 = &nbr4;
	nbr4 = &nbr5;
	nbr5 = &nbr6;
	nbr6 = &nbr7;
	nbr7 = &nbr8;
//	nbr8 = &n;
	nbr8 = &nbrflex;
	ft_ultimate_ft(nbr);
	printf("%d", nbrflex);
	return (0);
}
