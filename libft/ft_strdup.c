#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (str)
	{
		while (src[i])
		{
			str[i] = src[i];
			i++;
		}
		str[i] = 0;
		return (str);
	}
	return (0);
}