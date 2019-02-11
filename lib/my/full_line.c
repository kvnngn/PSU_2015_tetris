/*
** full_line.c for full_line in /home/nguye_z/PSU_2015_tetris/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sun Mar 20 22:21:20 2016 nguyen kevin
** Last update Sun Mar 20 22:21:34 2016 nguyen kevin
*/

#include "header.h"

int			full_line(char *line)
{
  int			i;

  i = 0;
  while (line[i] != '\n')
    {
      if (line[i] == '*' || line[i] == '|')
	i++;
      else
	return (0);
    }
  return (1);
}
