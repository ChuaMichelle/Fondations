/*
** my_strcmp.c for Fondations in /Users/fritzyx/Dev/etna/Bachelor_ED/fondation/chua_m/libmy
** 
** Made by CHUA Michelle
** Login   <chua_m@etna-alternance.net>
** 
** Started on  Tue Jul 21 16:06:44 2015 CHUA Michelle
** Last update Tue Jul 21 16:07:00 2015 CHUA Michelle
*/

int	my_strcmp(char *str1, char *str2)
{
  int	i;

  i = 0;
  while ((str1[i] != '\0') || (str2[i] != '\0'))
    {
      if (str1[i] > str2[i])
        {
          return (1);
        }
      if (str1[i] < str2[i])
        {
          return (-1);
        }
      i++;
    }
  return (0);
}
