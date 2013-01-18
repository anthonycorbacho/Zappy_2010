/*
** xfree.c for my xfree in /home/lornac_a/libs/sys
** 
** Made by mathieu1 lornac
** Login   <lornac_a@epitech.net>
** 
** Started on  Wed Dec  2 18:28:41 2009 mathieu1 lornac
** Last update Thu Apr  8 14:15:41 2010 mathieu1 lornac
*/

#include <sys/types.h>

#include "lxsys.h"

void		xfree(void *d)
{
  if (d)
    free(d);
}

void		xfree_n(void *a, ...)
{
  va_list	vl;
  void		*arg;

  xfree(a);
  va_start(vl ,a);
  while (((arg = va_arg(vl, void *)) != (void *) -1))
    xfree(arg);
  va_end(vl);
}
