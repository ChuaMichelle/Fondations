/*
** my_putchar.c for Fondations in /Users/fritzyx/Dev/etna/Bachelor_ED/fondation/chua_m/libmy
** 
** Made by CHUA Michelle
** Login   <chua_m@etna-alternance.net>
** 
** Started on  Tue Jul 21 16:47:51 2015 CHUA Michelle
** Last update Tue Jul 21 16:49:37 2015 CHUA Michelle
*/

#include <unistd.h>

void	my_putchar(char *c)
{
  write(1, &c, 1);
}
