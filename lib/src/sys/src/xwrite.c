/*
** xwrite.c for xwrite func in /home/matt/work/Dropbox/Epitech/Lib/sys
** 
** Made by mathieu1 lornac
** Login   <lornac_a@epitech.net>
** 
** Started on  Wed Feb 17 14:45:57 2010 mathieu1 lornac
** Last update Wed Feb 17 14:56:27 2010 mathieu1 lornac
*/

#include <unistd.h>

void	xwrite(int fd, const void *buf, size_t count)
{
  int	a;

  a = write(fd, buf, count);
  a = a;
}
