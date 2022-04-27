#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int		l;
	int		m;
	int		n;	

	l = 0;
	while (l <= 7)
	{
		m = l + 1;
		while (m <= 8)
		{
			n = m + 1;
			while (n <= 9)
			{
				ft_print('0' + l);
				ft_print('0' + m);
				ft_print('0' + n);
				if (!(l == 7 && m == 8 && n == 9))
					write(1, ", ", 2);
				n++;
			}
			m++;
		}
		l++;
	}
}
