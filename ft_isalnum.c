
int	ft_isalnum(int c)
{
	if ((c >= 0 && c <= 9) ||
	 (c >= 65 && c <= 90) ||
	 (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include <stdio.h>
int	main(void)
{
	char	c;
	int	i;
	char	sp;

	c = 'A';
	i = 6;
	sp = ' ';

	printf("\nResult for %c: %d", c, ft_isalnum(c));
	printf("\nResult for %d: %d", i, ft_isalnum(i));
	printf("\nResult for %c: %d", sp, ft_isalnum(sp));
	return (0);
}

