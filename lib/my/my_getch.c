/*
** my_getch.c for my_getch in /home/marrie_h/rendu/PSU/PSU_2015_tetrisperso
** 
** Made by hugo marrien
** Login   <marrie_h@epitech.net>
** 
** Started on  Wed Mar 16 14:05:03 2016 hugo marrien
** Last update Sun Mar 20 23:19:27 2016 hugo marrien
*/

#include "header.h"

void			set_mode(int mod)
{
  struct termios	newT;
  static struct termios	oldT;

  if (mod == 1)
    {
      ioctl(0, TCGETS, &oldT);
      newT.c_lflag &= ~ECHO;
      newT.c_lflag &= ~ICANON;
      newT.c_cc[VMIN] = 0;
      newT.c_cc[VTIME] = 1;
      ioctl(0, TCSETS, &newT);
    }
  else if (mod == 0)
    ioctl(0, TCSETS, &oldT);
}

char	*my_getch()
{
  char	*ch;

  ch = malloc(5);
  ch[0] = 4;
  set_mode(1);
  while (ch[0] == 4)
    read(0, ch, 1);
  set_mode(0);
  return (ch);
}
