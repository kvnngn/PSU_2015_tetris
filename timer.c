/*
** timer.c for timer in /home/marrie_h/rendu/PSU/PSU_2015_tetrisperso
** 
** Made by hugo marrien
** Login   <marrie_h@epitech.net>
** 
** Started on  Mon Feb 29 22:47:49 2016 hugo marrien
** Last update Mon Mar  7 14:23:24 2016 nguyen kevin
*/

#include "header.h"

void	timer()
{
  int	s;
  int	m;
  int	h;

  time = time + 1;
  s = time % 60;
  m = time / 60 % 60;
  h = time / 3600;
  mvprintw(23, 10, "%d", 0);
  mvprintw(23, 13, "%d", 0);
  mvprintw(23, 16, "%d", 0);
  mvprintw(23, 9, "%2d:", h);
  mvprintw(23, 12, "%2d:", m);
  mvprintw(23, 15, "%2d", s);
  refresh();
}

void	time_count(int pid)
{
  while (1)
    {
      sleep(1);
      kill(pid, SIGUSR1);
    }
}

void	init_timer()
{
  int	pid1;
  pid_t	pid2;

  pid1 = getpid();
  pid2 = fork();
  if (pid2 == 0)
    time_count(pid1);
}
