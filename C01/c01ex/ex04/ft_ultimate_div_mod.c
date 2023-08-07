#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)

{
	*a = *a / *b;
	*b = *a % *b;
}

#include <stdio.h>
	
int	main()

{
//	int x;
//	int y; 
	int a;
	int b;	
	a= 10;
	b = 2;
		printf("%d : %d = ", a, b);
	ft_ultimate_div_mod(&a, &b);
		printf("%d con resto %d", a, b);
	return (0);
}
