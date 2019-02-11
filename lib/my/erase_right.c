/*
** erase_right.c for erase_right in /home/nguye_z/PSU_2015_tetris/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sun Mar 20 22:33:07 2016 nguyen kevin
** Last update Sun Mar 20 22:33:28 2016 nguyen kevin
*/

#include "header.h"

void			erase_right(int *pos, char *tetris)
{
  int			i;
  int			y;

  i = 48;
  y = pos[0];
  while (i < tetris[2])
    {
      attroff(COLOR_PAIR(1));
      mvprintw(y, pos[1], "  ");
      y++;
      i++;
    }
}
