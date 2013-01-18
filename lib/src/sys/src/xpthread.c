/*
** xpthread.c for pthread in /home/matt/work/Dropbox/Epitech/Lib/sys/src
** 
** Made by mathieu1 lornac
** Login   <lornac_a@epitech.net>
** 
** Started on  Wed Mar 31 11:22:59 2010 mathieu1 lornac
** Last update Wed Mar 31 14:50:27 2010 mathieu1 lornac
*/

#include "lxsys.h"
#include <errno.h>
#include <pthread.h>

int		xpthread_mutex_lock(pthread_mutex_t *mutex)
{
  int		a;

  if ((a = pthread_mutex_lock(mutex)))
    {
      xwrite(2, "Mutex lock error, exiting...\n", 30);
      exit(2);
    }
  return (a);
}

int		xpthread_mutex_unlock(pthread_mutex_t *mutex)
{
  int		a;

  if ((a = pthread_mutex_unlock(mutex)))
    {
      xwrite(2, "Mutex unlock error, exiting...\n", 32);
      exit(2);
    }
  return (a);
}

int		xpthread_mutex_trylock(pthread_mutex_t *mutex)
{
  int		a;

  if ((a = pthread_mutex_trylock(mutex)))
    {
      if (errno == EINVAL)
	{
	  xwrite(2, "Mutex trylock error, exiting...\n", 33);
	  exit(2);
	}
    }
  return (a);
}
