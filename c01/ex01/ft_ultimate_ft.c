#include <stdio.h>
/////////|stdio.h| <- ABBIAMO CAMBIATO PACCHETTO, LASCEREMO |unistd| PER QUALCHE ALTRA VOLTA
void	ft_ultimate_ft()
{
//GENERIAMO ultimate_pointer ASSEGNANDOGLI SEMPRE PIU' PUNTATORI
//IN MANIERA SCALARE CI ANDREMO A CREARE I NOVE PUNTATORI/
	int	*********up9;
	int	********up8;
	int	*******up7;
	int	******up6;
	int	*****up5;
	int	****up4;
	int	***up3;
	int	**up2;
	int	*up1;
	int	n;
//DEFINIAMO UNA VARIABILE INTERA n E DIAMOLE UN VALORE///
		n = 42;				 ////////	_____________
////ASSOCIAMO CON & LA VARIABILE CHE VOGLIAMO PUNTARE////	|*P1__>>__42_|   
		up1 = &n;				/*      |   |_________	        */
		up2 = &up1;				/*      |*P2__<<__*P3|    	*/
		up3 = &up2;				/*      _________|   |	        */
		up4 = &up3;				/*      |*P5__>>__*P4|		*/
		up5 = &up4;				/*      |   |________	        */
		up6 = &up5;				/*	|*P6__<<__*P7|		*/
		up7 = &up6;				/*	__________|  |  	*/
		up8 = &up7;				/*	|*P9__>>__*P8|		*/
		up9 = &up8;				/*  				*/
		*********up9 = n
//COLLEGHIAMO LA CODA DEL NOSTRO ultimate pointer AL VALORE n 
	printf("%d", n);
//COMPILIAMO printf("% <-formato| d <-tipo INTERO[0,1,2,..]|", n <-argomento);
}


int	main()

{
	ft_ultimate_ft();
	return 0;
}

//M3DD1J
