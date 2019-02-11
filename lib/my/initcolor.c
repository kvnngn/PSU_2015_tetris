/*
** initcolor.c for initcolor in /home/nguye_z/PSU_2015_tetris/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sun Mar 20 22:31:53 2016 nguyen kevin
** Last update Sun Mar 20 22:32:07 2016 nguyen kevin
*/

#include "header.h"

void	initcolor()
{
  int	i;

  i = 0;
  while (i < 8)
    {
      init_pair(i, i, i);
      i++;
    }
}
