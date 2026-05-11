
int	ft_isdigit(int c)
{
	if ( c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	i;

	i = 3;
	printf("Result for %d: %d", i, ft_isdigit(i));
	i = 32;
	printf("\nResult for %d: %d", i, ft_isdigit(i));
	return (0);
}*/
