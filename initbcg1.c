/*
** initbcg1.c for initbcg1 in /home/marrie_h/rendu/PSU/PSU_2015_tetris
** 
** Made by hugo marrien
** Login   <marrie_h@epitech.net>
** 
** Started on  Tue Feb 23 10:33:36 2016 hugo marrien
** Last update Wed Mar 16 12:20:14 2016 nguyen kevin
*/

#include "header.h"

void	init_colorbcg1()
{
  init_pair(0, 0, 7);
  init_pair(1, 1, 1);
  init_pair(2, 2, 2);
  init_pair(3, 3, 3);
  init_pair(4, 4, 4);
  init_pair(5, 5, 5);
  init_pair(6, 6, 6);
  init_pair(7, 7, 7);
}

void	init_title1()
{
  attron(COLOR_PAIR(4));
  mvprintw(1, 1, "                       ");
  mvprintw(2, 3, " ");
  mvprintw(3, 3, " ");
  mvprintw(4, 3, " ");
  mvprintw(5, 3, " ");
  mvprintw(6, 3, " ");
  mvprintw(7, 3, " ");
  attroff(COLOR_PAIR(4));
  attron(COLOR_PAIR(3));
  mvprintw(3, 5, "   ");
  mvprintw(4, 5, " ");
  mvprintw(5, 5, "   ");
  mvprintw(6, 5, " ");
  mvprintw(7, 5, "   ");
  attroff(COLOR_PAIR(3));
  attron(COLOR_PAIR(1));
  mvprintw(3, 9, "   ");
  mvprintw(4, 10, " ");
  mvprintw(5, 10, " ");
  mvprintw(6, 10, " ");
  mvprintw(7, 10, " ");
  attroff(COLOR_PAIR(1));
  attron(COLOR_PAIR(2));
}

void	init_title2()
{
  mvprintw(3, 13, "  ");
  mvprintw(4, 13, " ");
  mvprintw(4, 15, " ");
  mvprintw(5, 13, "  ");
  mvprintw(6, 13, " ");
  mvprintw(6, 15, " ");
  mvprintw(7, 13, " ");
  mvprintw(7, 15, " ");
  attroff(COLOR_PAIR(2));
  attron(COLOR_PAIR(6));
  mvprintw(3, 17, " ");
  mvprintw(4, 17, " ");
  mvprintw(5, 17, " ");
  mvprintw(6, 17, " ");
  mvprintw(7, 17, " ");
  attroff(COLOR_PAIR(6));
  attron(COLOR_PAIR(5));
  mvprintw(3, 19, "   ");
  mvprintw(4, 19, " ");
  mvprintw(5, 19, "   ");
  mvprintw(6, 21, " ");
  mvprintw(7, 19, "   ");
  attroff(COLOR_PAIR(5));
}

void	init_next()
{
  attron(COLOR_PAIR(0));
  mvprintw(10, 21, " NEXT: ");
  mvprintw(11, 20, " ");
  mvprintw(11, 26, " ");
  mvprintw(12, 20, " ");
  mvprintw(12, 26, " ");
  mvprintw(13, 20, " ");
  mvprintw(13, 26, " ");
  mvprintw(14, 20, " ");
  mvprintw(14, 26, " ");
  mvprintw(15, 20, "       ");
  attroff(COLOR_PAIR(0));
}

void	fillwhite()
{
  int	l;
  int	c;

  l = 0;
  attron(COLOR_PAIR(7));
  while (l != LINES)
    {
      c = 0;
      while (c != COLS)
	{
	  mvprintw(l, c, " ");
	  c = c + 1;
	}
      l = l + 1;
    }
  attroff(COLOR_PAIR(7));
}

int	init_bcg()
{
  init_colorbcg1();
  /* fillwhite(); */
  init_title1();
  init_title2();
  init_next();
  init_score();
  return (0);
}
