#include <stdio.h>

//DICHIARIAMO DUE PUNTATORI ED UNA VARIABILE
void	ft_swap(int *px, int *py)
{
	int	fs;
	fs = *py; 
	*px = fs;
	*py = *px;
//LA VARIABILE funzione swap VIENE PUNTATA DA posizione x 
//CHE A SUA VOLTA VIENE PUNTATO DA posizione y
//CHE E' UGUALE A funzione swap [fs]
}

int	main()

{
//int *px; <--POSSO DICHIARARLE ANCHE COSI' IN MANIERA BANALE
//int   x; <--
int	*px, x;
int	*py, y;

//I VALORI x E y DA CAMBIARE:
	x = 3;
	y = 2;
	px = &x;
	py = &y;
	printf("x= %d\n", x);
	printf("y= %d\n", y);
	ft_swap(px, py);
	return 0;
}
//M3DD1J
