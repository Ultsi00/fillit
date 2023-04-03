#include "fillit.h"

char	*fill_map(char *map, int i, int j, t_cont cont)
{
	int	k;

	k = 0;
	map[i] = cont.arr[j][cont.coor[j][k]];
	while (k < 3)
	{
		if ((cont.coor[j][k + 1] - cont.coor[j][k]) > 1)
		{
			map[i + cont.coor[j][k + 1] - cont.coor[j][k] + cont.z]
				= cont.arr[j][cont.coor[j][k + 1]];
			i = i + cont.coor[j][k + 1] - cont.coor[j][k] + cont.z;
		}
		else
		{
			map[i + cont.coor[j][k + 1] - cont.coor[j][k]]
				= cont.arr[j][cont.coor[j][k + 1]];
			i = i + cont.coor[j][k + 1] - cont.coor[j][k];
		}
		k++;
	}
	return (map);
}
