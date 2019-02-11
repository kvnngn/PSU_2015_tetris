/*
** tetris.c for tetris in /home/nguye_z/rendu/PSU/PSU_2015_tetris/kevin
** 
** Made by nguyen kevin
** Login   <nguye_z@epitech.net>
** 
** Started on  Mon Mar  7 12:25:37 2016 nguyen kevin
** Last update Sun Mar 20 23:44:48 2016 nguyen kevin
*/

#include "header.h"

void			play2(char *tetris, int *pos, int *tmp, int ch)
{
  if (ch == KEY_RIGHT && (right_collision(pos, tetris) == 0))
    {
      erase_right(pos, tetris);
      pos[1]++;
    }
  else if (ch == KEY_LEFT && left_collision(pos, tetris) == 0)
    {
      erase_left(pos, tetris);
      pos[1]--;
    }
}


char			**play(char *tetris, int *pos, int *tmp, char **map)
{
  int			ch;

  ch = getch();
  if (ch == KEY_DOWN)
    {
      if (down_collision(pos, tetris) == 0)
	{
	  erase_under(pos, tmp[0] + 13, tetris);
	  pos[0]++;
	}
      else
	{
	  pos[0] = 12 + tmp[0];
	  map = check_stock(stock_tetris(tmp));
	}
    }
  play2(tetris, pos, tmp, ch);
  return (map);
}

int			game(char **map, int *pos)
{
  int			*tmp;
  char			*tetris;
  char			*next;

  if ((tmp = malloc(sizeof(int) * 2)) == NULL)
    return (0);
  tmp[0] = pos[0];
  tmp[1] = pos[1];
  show_map(map);
  tetris = open_path();
  while (lose_or_not(pos[1]) != 1)
    {
      if (pos[0] >= 11 + tmp [0])
	{
	  rm_next(tetris);
	  free(tetris);
	  tetris = next;
	}
      pos[1] = 40 + (tmp[1] / 2);
      pos[0] = 13;
      next = open_path();
      aff_next(next);
      while (pos[0] < 11 + tmp[0])
  	{
	  show_map(map);
	  signal(SIGUSR1, timer);
	  show_tetriminos(pos, tetris);
	  refresh();
	  map = play(tetris, pos, tmp, map);
  	}
    }
  mvprintw(tmp[0] + 13 + 1, tmp[1] + 40 / 2, "YOU LOST !");
  getch();
  return (0);
}

int			main(int ac, char **av)
{
  char			**map;
  int			*pos;

  tetris_flags(ac, av);
  if ((pos = malloc(sizeof(int) * 2)) == NULL)
    return (0);
  time = 0;
  checkifdebug(ac, av);
  if ((map = malloc(sizeof(char **) * pos[0] + 2)) == NULL)
    return (0);
  map = make_map(map, pos);
  init_colorbcg1();
  initscr();
  start_color();
  initcolor();
  keypad(stdscr, TRUE);
  noecho();
  curs_set(0);
  init_bcg();
  refresh();
  game(map, pos);
  refresh();
  endwin();
  return (0);
}
