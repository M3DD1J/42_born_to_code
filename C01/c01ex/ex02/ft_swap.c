#include <unistd.h>

void	ft_swap(int *a, int *b)

{	
	int swap;
	
	swap = *a;
	*a = *b;
	*b = swap;
	
	
}

#include <stdio.h>

int	main()

{	
	int	a;
	int	b;
	
	
	a = 20;

	b = 50;	


		printf("%d is a\n", a);
		printf("%d is b\n", b);

	ft_swap(&a, &b);
	printf("SWAP\n");
		printf("%d is a\n", a);
		printf("%d is b\n", b);
		
		return (0);
		 }
