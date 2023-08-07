#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)

{
	int	i;
	int	sorted;

	i = 0;
	
	while (!sorted)
	{
		sorted = 1;

		i = 0;
		
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				int temp;
				temp = tab[i];
				tab[i] = tab[i+1];
				tab[i + 1] = temp;
				sorted = 0;
			}
			i++;
		}
	}
}

int	main()
{
	int	arr[] = {5, 2, 3, 1, 4, 6};
	int	size = sizeof(arr) / sizeof(arr[0]);

	ft_sort_int_tab(arr, size);

	int	i;
	
	i = 0;
	while (i < size)
	{
		char c = arr[i] + '0';
		write(1, &c, 1);
		write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
//M3DD1J
