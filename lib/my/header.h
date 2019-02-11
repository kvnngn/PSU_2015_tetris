/*
** header.h for header in /home/nguye_z/rendu/CPE_2015_Pushswap
** 
** Made by nguyen kevin
** Login   <nguye_z@nguye-z-pc>
** 
** Started on  Fri Nov 20 12:22:50 2015 nguyen kevin
** Last update Sun Mar 20 23:07:42 2016 hugo marrien
*/

#ifndef HEADER_H_
# define HEADER_H_

#include <curses.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/ioctl.h>
#include <termios.h>

typedef struct	s_keysnopt
{
  char	*kl;
  char	*kr;
  char	*kt;
  char	*kd;
  char	*kq;
  char	*kp;
  int	n;
  int	l;
  int	row;
  int	col;
}		t_keysnopt;

typedef struct	s_ptr
{
  char                  *key;
  void                  (*ptr)();
}		t_ptr;

int			time;
int                     my_strlen(char *str);
int                     my_getnbr(char *str);
int			checkifdebug(int ac, char **av);
void			my_put_nbr(int nb);
int			my_getnbr(char *str);
void			my_putchar(char c);
void			my_putstr(char *str);
char			*my_strcpy(char *s1, char *s2);
char			**my_str_to_wordtab(char *str);
int			my_strlen(char *str);
int			my_getnbr(char *str);
void			init_score();
void			init_colorbcg2();
void			init_colorbcg1();
void			init_title1();
void			init_title2();
void			init_next();
void			fillwhite();
void			init_timer();
void			timer();
void			time_count(int pid);
char			*open_path();
int			my_strcmp(char *s1, char *s2);
char			*my_strdup(char *str);
void			my_put_name(char *str);
void			put_tetriname(char *name);
char			*exact_path(char *path, char *dir, char *name);
int			check_infos(char *infos);
char			*get_info(int fd);
int			info_gestion(char *name);
int			nb_tetriminos();
int			isitsort(char **names, int nb);
char			**sort_names(char **names, int nb);
void			put_keys();
void			debug();
void			set_mode(int mod);
char			*my_getch();
void			tetris_help();
int			tetris_flags(int ac, char **av);
void			initbcg();
int			down_collision(int *pos, char *tetris);
int			right_collision(int *pos, char *tetris);
int			left_collision(int *pos, char *tetris);
char			**delete_line(char **stock, int i);
int			full_line(char *line);
char			**check_stock(char **stock);
void                    show_stock(char **stock);
char			**stock_tetris(int *pos);
void			rm_next(char *tetris);
void                    square_next(int size);
void			square_other(int size);
void			aff_next(char *tetris);
void			show_tetriminos(int *pos, char *tetris);
void			show_map(char **map);
char			**make_map(char **map, int *pos);
void			initcolor();
void                    erase_left(int *pos, char *tetris);
void			erase_right(int *pos, char *tetris);
void			erase_under(int *pos, int tmp_y, char *tetris);
int			lose_or_not(int tmp);
int			checkifdebug(int ac, char **av);

#endif /* !HEADER_H_ */
