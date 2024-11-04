#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	char *arr;
	size_t i;

	i = 0;
	arr = (char *) malloc(size * nmemb);
	while (i < nmemb * size)
	{
		arr[i] = 0;
		i++;
	}
	return ((void *) arr);
}