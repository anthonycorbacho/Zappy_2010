/*
** xdup2.c for dup2 in /home/lornac_a/libs/sys
** 
** Made by mathieu1 lornac
** Login   <lornac_a@epitech.net>
** 
** Started on  Sun Dec  6 12:17:01 2009 mathieu1 lornac
** Last update Thu Mar 18 15:01:51 2010 mathieu1 lornac
*/

#include "lxsys.h"

void		xdup2(int old, int new)
{
  if (dup2(old, new) == -1)
    xwrite(2, "Dup 2 erreur\n", 13);
}
