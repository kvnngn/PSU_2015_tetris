/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/nguye_z/rendu/Piscine_C_bistromatique/eval_expr
** 
** Made by Kevin Nguyen
** Login   <nguye_z@epitech.net>
** 
** Started on  Fri Oct 30 01:31:16 2015 Kevin Nguyen
** Last update Tue Jan  5 12:49:03 2016 nguyen kevin
*/

#include <malloc.h>
#include <stdio.h>
#include <unistd.h>
#include "header.h"

int	nbr_word(char *str)
{
  int	i;
  int	nb_word;

  i = 0;
  nb_word = 0;
  while (str[i] != '\0')
    {
      if (str[i] != ' ')
	{
	  nb_word++;
	  while (str[i + 1] != ' ' && str[i + 1] != '\0')
	    i++;
	}
      i++;
    }
  return (nb_word);
}

char	**my_str_to_wordtab(char *str)
{
  int	i;
  int	j;
  int	a;
  int	nb_word;
  char	**tab;

  i = 0;
  a = 0;
  j = 0;
  if (str == NULL)
    return (0);
  nb_word = nbr_word(str);
  tab = malloc((nb_word + 1) * sizeof(*tab));
  while (i < nb_word)
    {
      tab[i] = malloc(my_strlen(str) * sizeof(*tab[i]));
      while (str[a] != ' ' && str[a] != '\0')
	tab[i][j++] = str[a++];
      tab[i][j] = '\0';
      j = 0;
      a++;
      i++;
    }
  tab[i] = 0;
  return (tab);
}
