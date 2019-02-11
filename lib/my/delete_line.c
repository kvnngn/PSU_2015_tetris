/*
** delete_line.c for delete_line in /home/nguye_z/PSU_2015_tetris/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sun Mar 20 22:20:56 2016 nguyen kevin
** Last update Sun Mar 20 22:21:06 2016 nguyen kevin
*/

#include "header.h"

char			**delete_line(char **stock, int i)
{
  while (i > 0)
    {
      stock[i] = stock[i - 1];
      i--;
    }
  return (stock);
}
