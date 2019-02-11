/*
** show_tetris.c for show_tetris in /home/nguye_z/PSU_2015_tetris/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sun Mar 20 22:23:31 2016 nguyen kevin
** Last update Sun Mar 20 22:24:13 2016 nguyen kevin
*/

#include "header.h"

char			**stock_tetris(int *pos)
{
  int			i;
  int			j;
  char			ch;
  int			tmp[2];
  char			**stock;

  tmp[0] = 13;
  if ((stock = malloc(sizeof(char **) * pos[0] + 2)) == NULL)
    return (NULL);
  i = 0;
  while (i < pos[0])
    {
      if ((stock[i] = malloc(sizeof(char *) * pos[1] + 2)) == NULL)
	return (NULL);
      j = 0;
      tmp[1] = 40;
      while (j < pos[1])
	{
	  ch = mvinch(tmp[0], tmp[1]) & A_CHARTEXT;
	  stock[i][j] = ch;
	  tmp[1]++;
	  j++;
	}
      stock[i][pos[1]] = '\n';
      stock[i][pos[1] + 1] = '\0';
      i++;
      tmp[0]++;
    }
  stock[i] = NULL;
  return (stock);
}
