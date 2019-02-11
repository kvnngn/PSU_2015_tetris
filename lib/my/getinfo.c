/*
** infogestion.c for infogestion in /home/marrie_h/rendu/PSU/PSU_2015_tetris
** 
** Made by hugo marrien
** Login   <marrie_h@epitech.net>
** 
** Started on  Sun Mar 20 20:27:25 2016 hugo marrien
** Last update Sun Mar 20 23:29:05 2016 nguyen kevin
*/

#include "header.h"

char	*get_info(int fd)
{
  char	*infos;
  int	i;
  char	buf[2];

  infos = malloc(20);
  i = 0;
  while (read(fd, buf, 1) != 0)
    {
      infos[i] = buf[0];
      i = i + 1;
    }
  return (infos);
}

int	check_infos(char *infos)
{
  int	i;

  i = 0;
  while (infos[i] != '\0')
    {
      if ((infos[i] < '0' || infos[i] > '9') && infos[i] != ' '
	  && infos[i] != '\n' && infos[i] != '*')
	return (1);
      else
        i = i + 1;
    }
  return (0);
}

char	*exact_path(char *path, char *dir, char *name)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (dir[i] != '\0')
    {
      path[j] = dir[i];
      i = i + 1;
      j = j + 1;
    }
  i = 0;
  path[j] = '/';
  j = j + 1;
  while (name[i] != '\0')
    {
      path[j] = name[i];
      i = i + 1;
      j = j + 1;
    }
  path[j] = '\0';
  return (path);
}

void	init_keys()
{
  t_keysnopt	knopt;

  knopt.kl = my_strdup("^EOD");
  knopt.kr = my_strdup("^EOC");
  knopt.kt = my_strdup("^EOA");
  knopt.kd = my_strdup("^EOB");
  knopt.kq = my_strdup("q");
  knopt.kp = my_strdup("p");
  knopt.n = 0;
  knopt.l = 1;
  knopt.row = 20;
  knopt.col = 10;
  put_keys(knopt);
  put_opt(knopt);
}
