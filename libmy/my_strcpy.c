/*
** my_strcpy.c for Fondations in /Users/fritzyx/Dev/etna/Bachelor_ED/fondation/chua_m/libmy
** 
** Made by CHUA Michelle
** Login   <chua_m@etna-alternance.net>
** 
** Started on  Tue Jul 21 16:07:16 2015 CHUA Michelle
** Last update Tue Jul 21 16:07:25 2015 CHUA Michelle
*/

char	*my_strcpy(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s2[i])
    {
     s1[i] = s2[i];
     i++;
    }
  s1[i] = '\0';
  return (s1);
}
