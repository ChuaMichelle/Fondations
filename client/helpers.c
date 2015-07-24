/*
** helpers.c for Fondations in /Users/fritzyx/Dev/etna/Bachelor_ED/fondation/chua_m/client
** 
** Made by CHUA Michelle
** Login   <chua_m@etna-alternance.net>
** 
** Started on  Tue Jul 21 15:57:24 2015 CHUA Michelle
** Last update Thu Jul 23 21:52:59 2015 CHUA Michelle
*/

#include "header.h"

int	my_read(int socket_desc, char *server_res, char *client_cmd)
{
  if (read(socket_desc, server_res, 30000) < EXIT_SUCCESS)
    {
      my_putstr("Failed to read server response.");
      return (EXIT_FAILURE);
    }
  else 
    {
      filter_command(server_res, client_cmd);
      free(server_res);
      server_res = NULL;
    }
  return (EXIT_SUCCESS);
}

int	my_write(int socket_desc, char *client_comd, int msg_length)
{
  if (write(socket_desc, client_comd, msg_length) < EXIT_SUCCESS)
    {
      my_putstr("Failed to send entered command to server.");
      return (EXIT_FAILURE);
    }
  return (EXIT_SUCCESS);
}
