/*
** my.c for my in /home/marrie_h/rendu/PSU/PSU_2015_tetris
** 
** Made by hugo marrien
** Login   <marrie_h@epitech.net>
** 
** Started on  Sun Mar 20 22:41:19 2016 hugo marrien
** Last update Sun Mar 20 22:43:23 2016 hugo marrien
*/

#include "header.h"

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    i = i + 1;
  if (s1[i] < s2[i])
    return (2);
  else if (s1[i] > s2[i])
    return (1);
  else
    return (0);
}

char	*my_strdup(char *str)
{
  char	*s;
  int	l;

  l = my_strlen(str);
  s = malloc(l + 1);
  my_strcpy(s, str);
  return (s);
}

void	my_put_name(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0' && str[i] != '.')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}
