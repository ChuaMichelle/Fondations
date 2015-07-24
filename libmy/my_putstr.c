/*
** my_putstr.c for Fondations in /Users/fritzyx/Dev/etna/Bachelor_ED/fondation/chua_m/libmy
** 
** Made by CHUA Michelle
** Login   <chua_m@etna-alternance.net>
** 
** Started on  Tue Jul 21 16:05:24 2015 CHUA Michelle
** Last update Tue Jul 21 16:06:29 2015 CHUA Michelle
*/

#include <unistd.h>

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
  {
    write(1, &str[i], 1);
    i++;
  }
}
