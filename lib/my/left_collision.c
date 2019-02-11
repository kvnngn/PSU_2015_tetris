/*
** left_collision.c for left_collision in /home/nguye_z/PSU_2015_tetris/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sun Mar 20 22:19:43 2016 nguyen kevin
** Last update Sun Mar 20 22:20:03 2016 nguyen kevin
*/

#include "header.h"

int			left_collision(int *pos, char *tetris)
{
  int			i;
  char			c;

  i = 0;
  while (i < tetris[2] - 48)
    {
      c = mvinch(pos[0] + i + 1, pos[1] - 1) & A_CHARTEXT;
      if (c == ' ')
	i++;
      else
	return (1);
    }
  return (0);
}
