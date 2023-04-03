#include "fillit.h"

int	tetr_count(int size)
{
	int	i;
	int	tetr;

	i = 0;
	tetr = 0;
	while (i <= size)
	{
		tetr++;
		i = i + 21;
	}
	return (tetr);
}
