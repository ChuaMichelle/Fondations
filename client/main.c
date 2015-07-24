/*
** main.c for Fondations in /Users/fritzyx/Dev/etna/Bachelor_ED/fondation/chua_m/client
** 
** Made by CHUA Michelle
** Login   <chua_m@etna-alternance.net>
** 
** Started on  Tue Jul 21 15:57:47 2015 CHUA Michelle
** Last update Thu Jul 23 21:57:03 2015 CHUA Michelle
*/

#include "header.h"

int	my_fondation(int argc , char **argv)
{
  int		socket_desc;
  struct	sockaddr_in s_server;

  if (validate_parameters(argc, argv) != EXIT_SUCCESS)  
    return (show_program_usage());

  socket_desc = socket_creation(AF_INET, SOCK_STREAM, EXIT_SUCCESS);
  s_server.sin_addr.s_addr = inet_addr(argv[2]);
  s_server.sin_family = AF_INET;
  s_server.sin_port = htons(4242);

  if (connect(socket_desc, (struct sockaddr *)&s_server, sizeof(s_server)) < 0)
    {
      perror("connection()\n");
      my_putstr("Problems occured while connecting to the server.");
      return (EXIT_FAILURE);
    } 

  client_interaction(socket_desc);
  return (EXIT_SUCCESS);
}

int	main(int argc, char **argv)
{
  if (my_fondation(argc, argv) == EXIT_FAILURE)
    return (EXIT_FAILURE);
  return (EXIT_SUCCESS);
}
