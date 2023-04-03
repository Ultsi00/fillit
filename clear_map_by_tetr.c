#include "fillit.h"

char	*clear_map_by_tetr(char *map, int placed, int j, t_cont cont)
{
	int	k;

	k = 0;
	map[placed] = '.';
	while (k < 3)
	{
		if ((cont.coor[j][k + 1] - cont.coor[j][k]) > 1)
		{
			map[placed + cont.coor[j][k + 1] - cont.coor[j][k] + cont.z] = '.';
			placed = placed + cont.coor[j][k + 1] - cont.coor[j][k] + cont.z;
		}
		else
		{
			map[placed + cont.coor[j][k + 1] - cont.coor[j][k]] = '.';
			placed = placed + cont.coor[j][k + 1] - cont.coor[j][k];
		}
		k++;
	}	
	return (map);
}
