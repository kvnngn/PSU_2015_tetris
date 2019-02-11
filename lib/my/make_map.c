/*
** make_map.c for make_map in /home/nguye_z/PSU_2015_tetris/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sun Mar 20 22:30:50 2016 nguyen kevin
** Last update Sun Mar 20 23:15:05 2016 nguyen kevin
*/

#include "header.h"

char		**make_map2(char **map, int *pos, int i, int j)
{
  if (j == 0)
    map[i][j] = '|';
  else if (j == pos[1] - 1)
    map[i][j] = '|';
  else if (i == pos[0] - 1 && j > 0 && j < pos[1] - 1)
    map[i][j] = '_';
  else
    map[i][j] = ' ';
  return (map);
}

char			**make_map(char **map, int *pos)
{
  int			i;
  int			j;

  pos[0] = 20;
  pos[1] = 10;  
  if ((map = malloc(sizeof(char **) * pos[0] + 2)) == NULL)
    return (NULL);
  i = 0;
  while (i < pos[0])
    {
      if ((map[i] = malloc(sizeof(char *) * pos[1] + 2)) == NULL)
	return (NULL);
      j = 0;
      while (j < pos[1])
	{
	  map = make_map2(map, pos, i, j);
	  j++;
	}
      map[i][pos[1]] = '\n';
      map[i][pos[1] + 1] = '\0';
      i++;
    }
  map[i] = NULL;
  return (map);
}
