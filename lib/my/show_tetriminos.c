/*
** show_tetriminos.c for show_tetriminos in /home/nguye_z/PSU_2015_tetris/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sun Mar 20 22:29:18 2016 nguyen kevin
** Last update Sun Mar 20 22:29:40 2016 nguyen kevin
*/

#include "header.h"

void			show_tetriminos(int *pos, char *tetris)
{
  int			x;
  int			y;
  int			i;
  int			tmp;

  x = pos[1];
  y = pos[0];
  i = 6;
  tmp = x;
  while (tetris[i] != '\0')
    {
      if (tetris[i] == '*')
	mvaddch(y, x++, tetris[i]);
      else if (tetris[i] == ' ')
	mvaddch(y, x++, ' ');
      else if (tetris[i] == '\n')
	{
	  x = tmp;
	  y++;
	}
      i++;
    }
}
