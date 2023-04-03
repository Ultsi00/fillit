#include "fillit.h"

int	**get_coor(int tetr, t_cont cont, int i, int k)
{
	int	j;

	cont.coor = (int **)malloc(sizeof(int *) * tetr);
	if (!cont.coor)
		return (NULL);
	j = 0;
	while (j < tetr)
	{
		cont.coor[j] = (int *)malloc(sizeof(int) * 4);
		if (!cont.coor[j])
			return (NULL);
		k = 0;
		i = 0;
		while (k < 4)
		{
			if (cont.arr[j][i] != '.' && cont.arr[j][i] != '\n')
			{
				cont.coor[j][k] = i;
				k++;
			}
			i++;
		}
		j++;
	}
	return (cont.coor);
}
