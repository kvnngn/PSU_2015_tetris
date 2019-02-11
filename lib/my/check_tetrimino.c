/*
** check_tetrimino.c for checktetrimino in /home/marrie_h/rendu/PSU/PSU_2015_bstetris
** 
** Made by hugo marrien
** Login   <marrie_h@epitech.net>
** 
** Started on  Wed Feb 24 14:32:06 2016 hugo marrien
** Last update Wed Mar 16 11:16:37 2016 nguyen kevin
*/

#include <sys/types.h>
#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

char	*goodpath(char *path, char *dir, char *name)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (dir[i] != '\0')
    {
      path[j] = dir[i];
      i = i + 1;
      j = j + 1;
    }
  i = 0;
  path[j] = '/';
  j = j + 1;
  while (name[i] != '\0')
    {
      path[j] = name[i];
      i = i + 1;
      j = j + 1;
    }
  path[j] = '\0';
  return (path);
}

char	*getinfo(int fd)
{
  char	*infos;
  int	i;
  char	buf[2];

  infos = malloc(20);
  i = 0;
  while (read(fd, buf, 1) != 0)
    {
      infos[i] = buf[0];
      i = i + 1;
    }
  infos[i] = '\0';
  return (infos);
}

int	checkinfos(char *infos)
{
  int	i;

  i = 0;
  while (infos[i] != '\0')
    {
      if ((infos[i] < '0' || infos[i] > '9') && infos[i] != ' '
	  && infos[i] != '\n' && infos[i] != '*')
	return (1);
      else
	i = i + 1;
    }
  return (0);
}

char	*infogestion(char *name)
{
  int	fd;
  char	*path;
  char	*dir;
  char	*infos;
  
  dir = "tetriminos";
  path = malloc(20);
  path = goodpath(path, dir, name);
  fd = open(path, O_RDONLY);
  infos = getinfo(fd);
  if (checkinfos(infos) == 1)
    {
      puts(" : Error");
      return (NULL);
    }
  checkinfos(infos);
  return (infos);
}

char		*open_path(int ac, char **av)
{
  DIR	*dd;
  struct dirent *res;
  struct stat st;
  int	 i;
  int	 j;
  
  i = rand() % 5 + 1;
  j = 0;
  dd = opendir("tetriminos");
  while (j < i)
    {
      res = readdir(dd);
      stat(res->d_name, &st);
      if (res == NULL)
	return (NULL);
      else if (res->d_name[0] != '.')
	{
	  infogestion(res->d_name);
	  j++;
	}
    }
  return (infogestion(res->d_name));
}
