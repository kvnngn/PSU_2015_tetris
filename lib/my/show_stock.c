/*
** show_stock.c for show_stock in /home/nguye_z/PSU_2015_tetris/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sun Mar 20 22:22:36 2016 nguyen kevin
** Last update Sun Mar 20 22:23:01 2016 nguyen kevin
*/

#include "header.h"

void			show_stock(char **stock)
{
  int			i;
  int			x;
  int			y;
  int			j;

  i = 0;
  y = 1;
  while (stock[i] != NULL)
    {
      x = 1;
      j = 0;
      while (stock[i][j] != '\n')
	{
	  mvaddch(y, x, stock[i][j]);
	  x++;
	  j++;
	}
      y++;
      i++;
    }
}
