/*
** xmalloc.c for malloc function in /home/lornac_a/libs/sys
** 
** Made by mathieu1 lornac
** Login   <lornac_a@epitech.net>
** 
** Started on  Sat Nov 21 12:16:24 2009 mathieu1 lornac
** Last update Thu Mar 18 15:00:57 2010 mathieu1 lornac
*/

#include <sys/types.h>

#include "lxsys.h"

void		*xmalloc(int size)
{
  void		*alloc;

  alloc = malloc(size);
  if (alloc == NULL)
    {
      xwrite(2, "MALLOC FAILED\n", 14);
      exit(-1);
    }
  else
    return (alloc);
}
