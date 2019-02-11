/*
** right_collision.c for right_collision in /home/nguye_z/PSU_2015_tetris/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sun Mar 20 22:17:59 2016 nguyen kevin
** Last update Sun Mar 20 22:40:58 2016 nguyen kevin
*/

#include "header.h"

int			right_collision(int *pos, char *tetris)
{
  int			i;
  char			c;

  i = 0;
  while (i < tetris[2] - 48)
    {
      c = mvinch(pos[0] + i, pos[1] + tetris[0] - 48) & A_CHARTEXT;
      if (c == ' ')
	i++;
      else
	return (1);
    }
  return (0);
}
