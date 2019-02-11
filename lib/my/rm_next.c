/*
** rm_next.c for rm_next in /home/nguye_z/PSU_2015_tetris/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sun Mar 20 22:24:52 2016 nguyen kevin
** Last update Sun Mar 20 22:25:15 2016 nguyen kevin
*/

#include "header.h"

void			rm_next(char *tetris)
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
	mvaddch(y, x++, ' ');
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
