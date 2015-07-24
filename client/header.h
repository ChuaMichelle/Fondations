/*
** header.h for Fondations in /Users/fritzyx/Dev/etna/Bachelor_ED/fondation/chua_m/client
** 
** Made by CHUA Michelle
** Login   <chua_m@etna-alternance.net>
** 
** Started on  Tue Jul 21 15:51:18 2015 CHUA Michelle
** Last update Thu Jul 23 21:53:20 2015 CHUA Michelle
*/

#ifndef HEADER_H_
#define HEADER_H_

#include	<stdio.h>	/* For the perror() function */
#include	<stdlib.h>	/* For the variables EXIT_SUCCESS and EXIT_FAILURE */
#include	<sys/socket.h>	/* For the socket functions */
#include	<arpa/inet.h>	/* For the inet_addr() function */
#include	<unistd.h>	/* For the write() and read() functions */
#include <string.h> /*delete later for printf*/

/*
** Declarations of helper functions
*/
void	my_putchar(char *c);
void	my_putstr(char *str);
int	my_strlen(char *str);
int	my_strcmp(char *str1, char *str2);
char	*my_strcpy(char *s1, char *s2);
char	*readLine();

/*
** Declarations of main functions
*/
void	show_commands();
int	init();
int	filter_command(char *server_res, char *client_cmd);
void	table_header(char *chars);
void	table_one_col(char *chars);
void	table_two_col(char *text, char *server_res);
void	client_interaction(int socket_desc);
int	socket_creation(int domain, int type, int protocol);
int	validate_parameters(int argc, char **argv);
int	show_program_usage();
int	my_read(int socket_desc, char *message, char *client_cmd);
int	my_write(int socket_desc, char *client_comd, int msg_length);
int	server_interaction();

#endif
