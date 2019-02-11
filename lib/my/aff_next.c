/*
** aff_next.c for aff_next in /home/nguye_z/PSU_2015_tetris/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sun Mar 20 22:27:51 2016 nguyen kevin
** Last update Sun Mar 20 22:28:18 2016 nguyen kevin
*/

#include "header.h"

void			aff_next(char *tetris)
{
  int			x;
  int			y;
  int			i;
  int			tmp;

  i = 0;
  x = 29;
  y = 9;
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
  square_next(4);
  refresh();
}
