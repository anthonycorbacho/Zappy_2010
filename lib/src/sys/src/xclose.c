/*
** xclose.c for close in /home/lornac_a/libs/sys
** 
** Made by mathieu1 lornac
** Login   <lornac_a@epitech.net>
** 
** Started on  Thu Dec  3 13:53:39 2009 mathieu1 lornac
** Last update Thu Mar 18 15:02:09 2010 mathieu1 lornac
*/

#include "lxsys.h"

void		xclose(int fd)
{
  int		c;
  
  if ((c = close(fd)) == -1)
    c = write(2, "Close failure\n", 14);
  c = c;
}
