#include "libft.h"

int	ft_count(long nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		nb = nb * (-1);
		count = 1;
	}
	if (nb == 0)
		count = 1;
	else
	{
		while (nb)
		{
			nb = nb / 10;
			count++;
		}
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		len;
	int		is_neg;
	char	*str;
	long	nb;

	nb = (long)n;
	len = ft_count(nb);
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	is_neg = (nb < 0);
	if (is_neg)
		nb = -nb;
	str[len] = '\0';
	while (len--)
	{
		str[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	if (is_neg)
		str[0] = '-';
	return (str);
}
