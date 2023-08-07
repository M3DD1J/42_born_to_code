#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)

{
	int	sorted;
	int	i;

	sorted = 0;

	while (!sorted)
	{
		sorted = 1;
		i = 0;
		
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{	
				int	temp;
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				
				sorted = 0;
				
			}i++;
		}
	}
}
#include <stdio.h>

int	main()

{
	int	size;
	int	x;
	int	y;
	int	arr[] = {4, 1, 3, 6, 2, 5};
	
	size = sizeof(arr) / sizeof(arr[0]);

	x = 0;
	y = 0;
		printf("array iniziale: ");	
			while (x < size)
			{
				printf(" %d ", arr[x]);
				x++;
			}
		printf("\narray   finale: ");
				while (y < size)
				{	
				ft_sort_int_tab(arr, size);
				printf(" %d ", arr[y]);
				y++;
				}
				
	printf("\n");
	return (0);

}
//M3DD1J
