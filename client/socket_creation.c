/*
** socket_creation.c for Fondations in /Users/fritzyx/Dev/etna/Bachelor_ED/fondation/chua_m/client
** 
** Made by CHUA Michelle
** Login   <chua_m@etna-alternance.net>
** 
** Started on  Tue Jul 21 15:58:36 2015 CHUA Michelle
** Last update Tue Jul 21 15:58:40 2015 CHUA Michelle
*/

#include "header.h"

int	socket_creation(int domain, int type, int protocol)
{
  int	created_socket;

  created_socket = socket(domain, type, protocol);
  if (created_socket == -1)
    {
      perror("socket()");
      my_putstr("Problems were encountered in the socket creation process.");
      return (EXIT_FAILURE);
    }
  return (created_socket);
}
