/*
** table.c for Fondations in /Users/fritzyx/Dev/etna/Bachelor_ED/fondation/chuana_m/client
** 
** Made by CHUA Michelle
** Login   <chua_m@etna-alternance.net>
** 
** Started on  Thu Jul 23 21:57:18 2015 CHUA Michelle
** Last update Thu Jul 23 21:57:59 2015 CHUA Michelle
*/

#include "header.h"

void	table_header(char *chars)
{
  int	counter;
  int	total_line;

  total_line = 111;
  my_putstr("\n+");
  for (counter = 0; counter <= total_line; counter++)
    my_putstr("-");
  my_putstr("+\n");

  my_putstr("| ");
  my_putstr(chars);
  for (counter = 1; counter <= (total_line - my_strlen(chars)); counter++)
    my_putstr(" ");
  my_putstr("|\n");

  my_putstr("+");
  for (counter = 0; counter <= total_line; counter++)
    my_putstr("-");
  my_putstr("+\n");
}

void	table_one_col(char *chars)
{
  int	counter;
  int	total_line;

  total_line = 111;
  chars[my_strlen(chars) - 1] = '\0';

  my_putstr("| ");
  my_putstr(chars);
  for (counter = 1; counter <= (total_line - my_strlen(chars)); counter++)
    my_putstr(" ");
  my_putstr("|\n");

  my_putstr("+");
  for (counter = 0; counter <= total_line; counter++)
    my_putstr("-");
  my_putstr("+\n");  
}

void	table_two_col(char *text, char *server_res)
{
  int	counter;
  int	total_line;
  int	divided_num;

  total_line = 111;
  divided_num = (total_line - (my_strlen(text) + my_strlen(server_res))) / 2;
  server_res[my_strlen(server_res) - 1] = '\0';

  my_putstr("| ");
  my_putstr(text);
  for (counter = 2; counter <= divided_num; counter++)
    my_putstr(" ");
  my_putstr(" | ");
  my_putstr(server_res);
  for (counter = 2; counter <= divided_num; counter++)
    my_putstr(" ");
  my_putstr("|\n");

  my_putstr("+");
  for (counter = 0; counter <= total_line; counter++)
    my_putstr("-");
  my_putstr("+\n");  
}
