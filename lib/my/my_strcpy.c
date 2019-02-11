/*
** my_strcpy.c for my_strcpy in /home/nguye_z/rendu/Piscine_C_J06
** 
** Made by kevin nguyen
** Login   <nguye_z@epitech.net>
** 
** Started on  Mon Oct  5 09:54:51 2015 kevin nguyen
** Last update Fri Mar  4 14:51:04 2016 nguyen kevin
*/

#include "header.h"

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}
