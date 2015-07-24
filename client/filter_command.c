/*
** filter_command.c for Fondations in /Users/fritzyx/Dev/etna/Bachelor_ED/fondation/chuana_m/client
** 
** Made by CHUA Michelle
** Login   <chua_m@etna-alternance.net>
** 
** Started on  Thu Jul 23 21:45:51 2015 CHUA Michelle
** Last update Thu Jul 23 21:49:08 2015 CHUA Michelle
*/

#include "header.h"

void	catch_commands(char *server_res, char *client_cmd)
{
  if (my_strcmp(client_cmd, "/hs") == EXIT_SUCCESS)
    {
      table_header("Conversation with the spiritual leader");
      table_two_col("Hari Seldons' last message:", server_res);
    }
  else if (my_strcmp(client_cmd, "/psychohistory") == EXIT_SUCCESS)
    {
      table_header("Dictionary");
      table_two_col("What is psychohistory?", server_res);
    }
  else if (my_strcmp(client_cmd, "/me") == EXIT_SUCCESS)
    {
      table_header("Available personal information");
      table_two_col("Status:", server_res);
    }
  else if (my_strcmp(client_cmd, "/list") == EXIT_SUCCESS)
    {
      table_header("List of all the planet Trantors' residents");
      table_one_col(server_res);
    }
  else
    {
      table_header("Retrieved status of a specific resident");
      table_one_col(server_res);
    }
}

int	filter_command(char *server_res, char *client_cmd)
{
  if (my_strcmp(server_res, "/ok\n") == EXIT_SUCCESS)
    table_header("Succesfully logged in, goodluck on your mission!");
  else if (my_strcmp(server_res, "ok\n") == EXIT_SUCCESS)
    table_header("Succesfully changed your own status!");
  else if (my_strcmp(server_res, "/ko\n") == EXIT_SUCCESS)
    table_header("Uknown command: Do /help to see all available commands.");
  else 
  {
    catch_commands(server_res, client_cmd);
  }
}
