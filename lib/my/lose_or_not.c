/*
** lose_or_not.c for lose_or_not in /home/nguye_z/PSU_2015_tetris/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sun Mar 20 22:35:01 2016 nguyen kevin
** Last update Sun Mar 20 22:35:17 2016 nguyen kevin
*/

#include "header.h"

int			lose_or_not(int tmp)
{
  int			x;
  char			ch;

  x = 41;
  tmp = 41 + tmp;
  while (x <= tmp)
    {
      ch = mvinch(13, x) & A_CHARTEXT;
      if (ch == '*')
	return (1);
      x++;
    }
  return (0);
}
