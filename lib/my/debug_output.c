/*
** debug_output.c for debug_output in /home/marrie_h/rendu/PSU/PSU_2015_tetris
** 
** Made by hugo marrien
** Login   <marrie_h@epitech.net>
** 
** Started on  Sun Mar 20 20:20:37 2016 hugo marrien
** Last update Sun Mar 20 22:52:07 2016 hugo marrien
*/

#include "header.h"

void		put_tetriname(char *name)
{
  my_putstr("Tetriminos : Name ");
  my_put_name(name);
}

int		info_gestion(char *name)
{
  int		fd;
  char		*path;
  char		*dir;
  char		*infos;

  dir = "tetriminos";
  path = malloc(20);
  path = exact_path(path, dir, name);
  fd = open(path, O_RDONLY);
  infos = get_info(fd);
  if (check_infos(infos) == 1)
    {
      my_putstr(" : Error\n");
      return (0);
    }
  check_infos(infos);
  my_putstr(" : Size ");
  my_putchar(infos[0]);
  my_putchar('*');
  my_putchar(infos[2]);
  my_putstr(" : Color ");
  my_putchar(infos[4]);
  my_putstr(" :");
  my_putstr(&infos[5]);
  return (0);
}

int		nb_tetriminos()
{
  int		i;
  struct dirent	*res;
  DIR		*dd;

  dd = opendir("tetriminos");
  i = 0;
  while ((res = readdir(dd)) != NULL)
    {
      if (res->d_type == DT_REG)
        i = i + 1;
    }
  return (i);
}

void		put_opt(t_keysnopt knopt)
{
  my_putstr("Next : ");
  if (knopt.n == 1)
    my_putstr("Yes");
  else
    my_putstr("No");
  my_putchar('\n');
  my_putstr("Level : ");
  my_put_nbr(knopt.l);
  my_putchar('\n');
  my_putstr("Size : ");
  my_put_nbr(knopt.row);
  my_putchar('*');
  my_put_nbr(knopt.col);
  my_putchar('\n');
}

void		put_keys(t_keysnopt knopt)
{
  my_putstr("*** DEBUG MODE ***\n");
  my_putstr("Key Left : ");
  my_putstr(knopt.kl);
  my_putchar('\n');
  my_putstr("Key Right : ");
  my_putstr(knopt.kr);
  my_putchar('\n');
  my_putstr("Key Turn : ");
  my_putstr(knopt.kt);
  my_putchar('\n');
  my_putstr("Key Drop : ");
  my_putstr(knopt.kd);
  my_putchar('\n');
  my_putstr("Key Quit : ");
  my_putstr(knopt.kq);
  my_putchar('\n');
  my_putstr("Key Pause : ");
  my_putstr(knopt.kp);
  my_putchar('\n');
}
