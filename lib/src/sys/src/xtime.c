/*
** xtime.c for time in /home/matt/work/Dropbox/Epitech/Lib/sys
** 
** Made by mathieu1 lornac
** Login   <lornac_a@epitech.net>
** 
** Started on  Wed Mar 24 10:59:01 2010 mathieu1 lornac
** Last update Wed Mar 24 11:07:16 2010 mathieu1 lornac
*/

#include <sys/time.h>
#include <unistd.h>

#include "lxsys.h"

int	xgettimeofday(struct timeval *tv, struct timezone *tz)
{
  char	str[] = "Erreur spatio temporelle.. Arakari....\n";
  if (gettimeofday(tv, tz) == -1)
    {
      xwrite(2, str, 39);
      exit(1);
    }
  return (0);
}
