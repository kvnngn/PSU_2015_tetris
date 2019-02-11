/*
** erase_under.c for erase_under in /home/nguye_z/PSU_2015_tetris/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sun Mar 20 22:34:16 2016 nguyen kevin
** Last update Sun Mar 20 22:34:38 2016 nguyen kevin
*/

#include "header.h"

void			erase_under(int *pos, int tmp_y, char *tetris)
{
  int			i;
  int			x;
  int			y;

  x = pos[1];
  y = pos[0];
  i = 0;
  if (y + tetris[2] - 48 < tmp_y)
    {
      while (i < tetris[0] - 48)
	{
	  mvaddch(y, x, ' ');
	  erase_right(pos, tetris);
	  i++;
	  x++;
	}
    }
}
