/*
** client_interaction.c for Fondations in /Users/fritzyx/Dev/etna/Bachelor_ED/fondation/chua_m/client
** 
** Made by CHUA Michelle
** Login   <chua_m@etna-alternance.net>
** 
** Started on  Tue Jul 21 15:50:26 2015 CHUA Michelle
** Last update Thu Jul 23 21:56:08 2015 CHUA Michelle
*/

#include "header.h"

int	server_interaction(int socket_desc, char *client_cmd)
{
  int	arr[1];
  int	i;
  int	response;
  char	*server_res;
  
  server_res = malloc(sizeof(*server_res) * (512));
  arr[0] = my_write(socket_desc, client_cmd, my_strlen(client_cmd));
  arr[1] = my_read(socket_desc, server_res, client_cmd);

  for (i = 0; i == 1; i++)
    {
      if (response != EXIT_FAILURE)
	response = arr[i];   
    }
  return (response);
}

void	client_interaction(int socket_desc)
{
  char	*client_cmd;
  int	life;
  int	filter_res;

  life = init();
  while (life == EXIT_SUCCESS)
    { 
      my_putstr("\nEnter your command: ");
      client_cmd = readLine();
      if (my_strlen(client_cmd) >= 250) 
        my_putstr("Command too long, try again.\n");
      else if (my_strlen(client_cmd) != 0 && my_strlen(client_cmd) <= 249) 
        {
          if (my_strcmp(client_cmd, "/bye") == EXIT_SUCCESS)
            {
              table_header("Goodbye! -from the planet Trantor.");
              life = EXIT_FAILURE;
            }
          else if (my_strcmp(client_cmd, "/help") == EXIT_SUCCESS)
            show_commands();
          else 
            server_interaction(socket_desc, client_cmd);
        }
    }
  close(socket_desc);
}
