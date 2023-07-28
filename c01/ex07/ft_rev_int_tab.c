
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int start = 0;
	int end = size - 1;

	while (start < end) 
	{
		int temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;

		start++;
		end--;
	}
}
#include <stdio.h>
int main()
{
	int numbers[] = {1, 2, 3, 4, 5};
	int size = sizeof(numbers) / sizeof(numbers[0]);

	printf("array originale: ");
	for (int i = 0; i < size; i++) 
	{
		printf("%d ", numbers[i]);
	}
	ft_rev_int_tab(numbers, size);
	printf("\nArray invertito: ");
	for (int i = 0; i < size; i++)
	{
				printf("%d ", numbers[i]);
				}
				return 0;
				}
