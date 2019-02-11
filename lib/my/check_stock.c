/*
** check_stock.c for check_stock in /home/nguye_z/PSU_2015_tetris/lib/my
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Sun Mar 20 22:22:02 2016 nguyen kevin
** Last update Sun Mar 20 22:22:22 2016 nguyen kevin
*/

#include "header.h"

char			**check_stock(char **stock)
{
  int			i;
  int			check;

  i = 0;
  while (stock[i] != NULL)
    {
      if ((check = full_line(stock[i])) == 1)
	stock = delete_line(stock, i);
      i++;
    }
  return (stock);
}
