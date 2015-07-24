# Fondations

## About

This is a school project from [ETNA](http://www.etna-alternance.net/). The goal is to communicate with a given server using the Transmission Control Protocol in C language. 

The coded program is to launched in the terminal with the command : `./fondation --ip [any IP] --port [port num]`

### Preview of the project

After wandering in the confines of space for more than a decade, you land on a very strange planet called Trantor.
Your mission is to take your first steps on this planet which lacks ressources.
You're led by scientists who are blindly following a principle established by their spiritual leader Hari Seldon, what a psychohistory !

### Executable commands

Command Description  |  Command  |  Response  |  Response Description
------------- | ------------- | ------------- | -------------
Authentification  |  /auth [firstName]:[lastName]\n  |  /ok\n  |  Succesfully authentificated
List of residents  | /list\n  |  |  Returns a list of all the residents of the planet Trantor
Hari Seldon's Message | /hs\n  |  |  Returns the last message of Hari Seldon
What is psychohistory ?  |  /psychohistory\n  |  |  Returns the definition of the word
Residents' Status  |  /getstatus [firstName]:[lastName]\n  |  |  Returns the status of a specific resident of the planet Trantor
Show personal information  |  /me\n  |  |  Returns informations of the logged user
Change personal status  |  /setstatus [new status]\n  |  /ok\n  |  Change status of the logged user
