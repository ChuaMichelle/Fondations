/*
** welcome.c for Fondations in /Users/fritzyx/Dev/etna/Bachelor_ED/fondation/chuana_m/client
** 
** Made by CHUA Michelle
** Login   <chua_m@etna-alternance.net>
** 
** Started on  Thu Jul 23 21:58:29 2015 CHUA Michelle
** Last update Thu Jul 23 21:58:52 2015 CHUA Michelle
*/

#include "header.h"

int	init()
{
  my_putstr("\n+--------------------------------------------------------+\n");
  my_putstr("| Welcome to planet Trantor!                               |\n");
  my_putstr("+----------------------------------------------------------+\n");
  my_putstr("| Do /help to show all of the available commands           |\n");
  my_putstr("+----------------------------------------------------------+\n");
  my_putstr("| Warning + Remember log in before executing your mission. |\n");
  my_putstr("+----------------------------------------------------------+\n");
  return (EXIT_SUCCESS);
}

int	show_program_usage()
{
  my_putstr("\n+-------------------------------------------------------+\n");
  my_putstr("| Improper use of program.                              |\n");
  my_putstr("+-------------------------------------------------------+\n");
  my_putstr("| Correct usage: ./fondation --ip [any IP] --port 4242  |\n");
  my_putstr("+-------------------------------------------------------+\n\n");
  return (EXIT_FAILURE);
}

void	show_commands()
{
  my_putstr("\n+-------------------------------------------------------+\n");
  my_putstr("| Available commands:                                   |\n");
  my_putstr("+-------------------------------------------------------+\n");
  my_putstr("| Log in                 + /auth [firstname]:[lastname] |\n");
  my_putstr("+-------------------------------------------------------+\n");
  my_putstr("| List Trantor residents + /list                        |\n");
  my_putstr("+-------------------------------------------------------+\n");
  my_putstr("| Hari Seldons' message  + /hs                          |\n");
  my_putstr("+-------------------------------------------------------+\n");
  my_putstr("| What is psychohistory? + /psychohistory               |\n");
  my_putstr("+-------------------------------------------------------+\n");
  my_putstr("| Get resident status    + /getstatus [fname]:[lname]   |\n");
  my_putstr("+-------------------------------------------------------+\n");
  my_putstr("| Get own information    + /me                          |\n");
  my_putstr("+-------------------------------------------------------+\n");
  my_putstr("| Change own status      + /setstatus [new status]      |\n");
  my_putstr("+-------------------------------------------------------+\n");
  my_putstr("| Leave the planet       + /bye                         |\n");
  my_putstr("+-------------------------------------------------------+\n");
  my_putstr("\n");
  my_putstr("+-------------------------------------------------------+\n");
  my_putstr("| Warning:                                              |\n");
  my_putstr("+-------------------------------------------------------+\n");
  my_putstr("| Log in before proceeding with your mission!           |\n");
  my_putstr("+-------------------------------------------------------+\n");
}
