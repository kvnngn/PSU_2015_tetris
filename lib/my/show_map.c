/*
** show_map.c for show_map in /home/nguye_z/PSU_2015_tetris/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sun Mar 20 22:30:06 2016 nguyen kevin
** Last update Sun Mar 20 22:30:35 2016 nguyen kevin
*/

#include "header.h"

void			show_map(char **map)
{
  int                   x;
  int                   y;
  int                   i;
  int                   j;


  i = 0;
  x = 40;
  y = 13;
  init_timer();
  while (map[i] != NULL)
    {
      j = 0;
      x = 40;
      while (map[i][j] != '\n')
	{
	  if (j == 0 || map[i + 1] == NULL || map[i][j + 1] == '\n')
	    attron(COLOR_PAIR(1));
	  else
	    attroff(COLOR_PAIR(1));
	  mvaddch(y, x, map[i][j]);
	  j++;
	  x++;
	}
      y++;
      i++;
    }
  attroff(COLOR_PAIR(1));
  square_other(6);
}
