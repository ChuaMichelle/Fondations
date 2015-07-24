/*
** my_strlen.c for Fondations in /Users/fritzyx/Dev/etna/Bachelor_ED/fondation/chua_m/libmy
** 
** Made by CHUA Michelle
** Login   <chua_m@etna-alternance.net>
** 
** Started on  Tue Jul 21 16:07:39 2015 CHUA Michelle
** Last update Tue Jul 21 16:07:47 2015 CHUA Michelle
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i++;
    }
  return (i);
}
