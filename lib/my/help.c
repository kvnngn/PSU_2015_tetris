/*
** help.c for help in /home/nguye_z/rendu/PSU/hugo/PSU_2015_tetris
** 
** Made by nguyen kevin
** Login   <nguye_z@epitech.net>
** 
** Started on  Tue Feb 23 19:59:16 2016 nguyen kevin
** Last update Sun Mar 20 22:43:35 2016 nguyen kevin
*/

#include "header.h"
#include "help.h"

void                    tetris_help()
{
  my_putstr("Usage: ./tetris [options]\n");
  my_putstr("Options:\n");
  my_putstr("  --help\t\t\tDisplay this help\n");
  my_putstr("  -l --level={num}\t\tStart Tetris at level num\n");
  my_putstr("  -kl --key-left={K}\t\tMove tetrimino on LEFT with key K\n");
  my_putstr("  -kr --key-right={K}\t\tMove tetrimino on RIGHT with key K\n");
  my_putstr("  -kt --key-turn={K}\t\tTurn tetrimino with key K\n");
  my_putstr("  -kd --key-drop={K}\t\tSet default DROP on key K\n");
  my_putstr("  -kq --key-quit={K}\t\tQuit program when press key K\n");
  my_putstr("  -kp --key-pause={K}\t\tPause and restart game when press key K\n");
  my_putstr("  --map-size={row,col}\t\tSet game size at row, col\n");
  my_putstr("  -w --without-next\t\tHide next tetrimino\n");
  my_putstr("  -d --debug\t\t\tDebug mode\n");
}

void		flag_is_kl()
{
  my_putstr("-kl OK\n");
}

void		flag_is_kr()
{
  my_putstr("-kr OK\n");
}

void		flag_is_kt()
{
  my_putstr("-kt OK\n");
}

void		flag_is_kd()
{
  my_putstr("-kd OK");
}

void		flag_is_kq()
{
  my_putstr("-kq OK\n");
}

void		flag_is_kp()
{
  my_putstr("-kp OK\n");
}

void            init_tab(t_struct *tab)
{
  tab[0].flag = 'l';
  tab[0].ptr = flag_is_kl;
  tab[1].flag = 'r';
  tab[1].ptr = flag_is_kr;
  tab[2].flag = 't';
  tab[2].ptr = flag_is_kt;
  tab[3].flag = 'd';
  tab[3].ptr = flag_is_kd;
  tab[4].flag = 'q';
  tab[4].ptr = flag_is_kp;
  tab[5].flag = 'p';
  tab[5].ptr = flag_is_kp;
}

int		call_function(char **av)
{
  int		i;
  t_struct	*tab;
  
  tab = malloc(sizeof(t_struct) * 6);
  init_tab(tab);
  i = 0;
  while (i < 6)
    {
      if (av[1][1] == 'k' && av[1][2] != '\0')
	{
	  if (av[1][2] == tab[i].flag)
	    {
	      tab[i].ptr();
	      return (0);
	    }
	}
      i = i + 1;
    }
  return (1);
}

int		other_flag(int c)
{
  if (c == 'l')
    {
      my_putstr("-l OK\n");
      return (0);
    }
  else if (c == 'd')
    {
      debug();
      return (0);
    }
  else if (c == 'w')
    {
      my_putstr("-w OK\n");
      return (0);
    }
  else
    {
      tetris_help();
      return (0);
    }
  return (1);
}

int		which_flag(char **av)
{
  int		j;

  j = 0;
  if (av[1][j] == '-')
    {
      j++;
      if (call_function(av) == 1)
	other_flag(av[1][j]);
    }
  return (0);
}

int             tetris_flags(int ac, char **av)
{
  if (ac > 1)
    {
      if (av[1][0] == '-' && (av[1][1] == 'k' || av[1][1] == 'l'
			      || av[1][1] == 'w' || av[1][1] == 'd'))
	which_flag(av);
      else
	tetris_help();
    }
  return (0);
}
