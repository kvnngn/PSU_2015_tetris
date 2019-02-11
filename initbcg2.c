/*
** initbcg2.c for initbcg2 in /home/marrie_h/rendu/PSU/PSU_2015_tetris
** 
** Made by hugo marrien
** Login   <marrie_h@epitech.net>
** 
** Started on  Tue Feb 23 16:39:38 2016 hugo marrien
** Last update Wed Mar 16 12:37:03 2016 nguyen kevin
*/

#include "header.h"

void	init_colorbcg2()
{
  init_pair(8, 4, 7);
}

void	init_score()
{
  init_colorbcg2();
  attron(COLOR_PAIR(8));
  mvprintw(17, 1, " HIGH SCORE :");
  mvprintw(18, 1, " SCORE :");
  mvprintw(20, 1, " LINES :");
  mvprintw(21, 1, " LEVEL :");
  mvprintw(23, 1, " TIMER :");
  attroff(COLOR_PAIR(8));
}
