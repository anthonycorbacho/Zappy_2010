/*
** xfork.c for xfork in /home/matt/work/Dropbox/Epitech/Lib/sys/src
** 
** Made by mathieu1 lornac
** Login   <lornac_a@epitech.net>
** 
** Started on  Thu Mar 18 11:49:28 2010 mathieu1 lornac
** Last update Thu Mar 18 15:01:41 2010 mathieu1 lornac
*/

#include "lxsys.h"

/*
** Checks the return values of fork
** Exits if it fails
*/
pid_t	xfork(void)
{
  int	pid;

  if ((pid = fork()) == -1)
    {
      xwrite(2, "Fork failure\n", 13);
      exit(1);
    }
  return (pid);
}
