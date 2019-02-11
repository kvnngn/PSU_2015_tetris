/*
** checkifdebug.c for checkifdebug in /home/nguye_z/PSU_2015_tetris/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sun Mar 20 22:36:04 2016 nguyen kevin
** Last update Sun Mar 20 22:36:15 2016 nguyen kevin
*/

#include "header.h"

int     checkifdebug(int ac, char **av)
{
  int   i;

  i = 0;
  while (i < ac)
    {
      if (av[i][1] == 'd')
	{
	  debug();
	  return (0);
	}
      i = i + 1;
    }
  return (0);
}
