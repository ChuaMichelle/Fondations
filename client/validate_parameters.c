/*
** validate_parameters.c for Fondations in /Users/fritzyx/Dev/etna/Bachelor_ED/fondation/chua_m/client
** 
** Made by CHUA Michelle
** Login   <chua_m@etna-alternance.net>
** 
** Started on  Tue Jul 21 15:58:48 2015 CHUA Michelle
** Last update Thu Jul 23 21:58:16 2015 CHUA Michelle
*/

#include "header.h"

int	validate_parameters(int argc, char **argv)
{
  if ((argc != 5) || 
      (my_strcmp(argv[1], "--ip") != EXIT_SUCCESS) || 
      (my_strcmp(argv[3], "--port") != EXIT_SUCCESS) || 
      (my_strcmp(argv[4], "4242") != EXIT_SUCCESS))
    {
      return (EXIT_FAILURE);
    }
  else 
    {
      return (EXIT_SUCCESS);
    }
}
