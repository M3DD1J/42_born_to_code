#include<unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		w_loop(int pos_x, int pos_y, int w, int h)
{
	if (pos_y == 0 ||  pos_y == h -1)
	{
		if (pos_y == 0 && (pos_x == 0 || pos_x == w -1))
		ft_putchar('A');
		
		else if (pos_y == h -1 && (pos_x == 0 ||  pos_x == w -1))
		ft_putchar('C');
		
		else
		ft_putchar('B');
	}
	else
	{
		if (pos_x == 0 || pos_x == w -1)
		ft_putchar('B');
		
		else
		ft_putchar(' ');
	}
}

void		rush(int x, int y)
{
	int w;
	int h;
	int pos_x;
	int pos_y;
	w = x;
	h = y;
	pos_x = 0;
	pos_y = 0;
	while (pos_y < h)
	{
		while (pos_x < w)
		{
			w_loop(pos_y, pos_x, h, w);
			pos_x++;
		}
		pos_y++;
		pos_x = 0;
		ft_putchar( '\n');
	}
}


int		main()
{
	
	rush(10, 10);
	return (0);
}
