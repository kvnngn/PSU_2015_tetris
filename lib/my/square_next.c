/*
** square_next.c for square_next in /home/nguye_z/PSU_2015_tetris/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sun Mar 20 22:25:48 2016 nguyen kevin
** Last update Sun Mar 20 23:37:52 2016 hugo marrien
*/

#include "header.h"

int	square_loop_x(int x, int y, int x_max)
{
  while (x <= x_max)
    {
      mvaddch(y, x, ' ');
      x++;
    }
  return (x);
}

int	square_loop_y(int x, int y, int y_max)
{
  while (y <= y_max)
    {
      mvaddch(y, x, ' ');
      y++;
    }
  return (y);
}

void			square_next(int size)
{
  int			x;
  int			y;
  int			x_max;
  int			y_max;

  x = 20;
  y = 9;
  x_max = x + size * 3;
  y_max = y + size;
  attron(COLOR_PAIR(1));
  x = square_loop_x(x, y, x_max);
  y = square_loop_y(x, y, y_max);
  while (x_max > x - (size * 3) - 2)
    {
      mvaddch(y, x_max + 1, ' ');
      x_max--;
    }
  while (y_max > y - size - 2)
    {
      mvaddch(y_max + 1, x_max + 1, ' ');
      y_max--;
    }
  attroff(COLOR_PAIR(1));
}
