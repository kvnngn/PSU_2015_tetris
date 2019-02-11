/*
** check_tetrimino.c for checktetrimino in /home/marrie_h/rendu/PSU/PSU_2015_bstetris
** 
** Made by hugo marrien
** Login   <marrie_h@epitech.net>
** 
** Started on  Wed Feb 24 14:32:06 2016 hugo marrien
** Last update Sun Mar 20 22:52:21 2016 hugo marrien
*/

#include "header.h"

int	isitsort(char **names, int nb)
{
  int	i;

  i = 0;
  while (i < (nb - 1))
    {
      if (my_strcmp(names[i], names[i + 1]) == 1)
	return (1);
      else
	i = i + 1;
    }
  return (0);
}

char	**sort_names(char **names, int nb)
{
  char	*tmp;
  int	i;
  int	j;

  j = 0;
  i = 0;
  while (isitsort(names, nb) != 0)
    {
      i = i % (nb - 1);
      if (my_strcmp(names[i], names[i + 1]) == 1)
  	{
	  tmp = my_strdup(names[i]);
	  free(names[i]);
	  names[i] = my_strdup(names[i + 1]);
	  free(names[i + 1]);
	  names[i + 1] = my_strdup(tmp);
	  free(tmp);
	}
      i = i + 1;
      j = j + 1;
    }
  return (names);
}

int	is_tetrimino(char *name)
{
  int	l;
  int	t;
  char	*tetri;

  l = my_strlen(name) - 1;
  t = 8;
  tetri = my_strdup("tetrimino");
  while (l >= 0 && t >= 0)
    {
      if (name[l] != tetri[t])
	return (1);
      t = t - 1;
      l = l - 1;
    }
  if (t > 0)
    return (1);
  return (0);
}

void	put_infos(int nb, char **names)
{
  int	i;

  i = 0;
  sort_names(names, nb);
  while (i < nb)
    {
      put_tetriname(names[i]);
      info_gestion(names[i]);
      i = i + 1;
    }
  my_putstr("Press a key to start Tetris\n");
  my_getch();
}

void	debug()
{
  DIR	*dd;
  struct dirent *res;
  char	**names;
  int	nb;
  int	i;

  dd = opendir("tetriminos");
  nb = nb_tetriminos();
  init_keys();
  my_putstr("Tetriminos : ");
  my_put_nbr(nb);
  my_putchar('\n');
  names = malloc(sizeof(char *) * nb + 1);
  i = 0;
  while ((res = readdir(dd)) != NULL)
    {
      if (is_tetrimino(res->d_name) == 0)
  	{
  	  names[i] = my_strdup(res->d_name);
  	  i = i + 1;
  	}
    }
  put_infos(nb, names);
  free(names);
}
