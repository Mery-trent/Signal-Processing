/* Author: Meryem El Huseyin
Assignment: Assignment #5 - Signal Processing
** Description: This program demonstrates signal handling in unix using signals.
the program waits indefinitely for signals from the user.
** Signal Handlers: SIGINT (Ctrl + c)
  - increments a counter each time Ctrl+c is pressed
  - Once a maximum number of presses is reached, the handler is removed
** SIGQOUT (Ctrl+\): 
   - Creates a child process using fork().
   - The child sends SIGUSR1 to the parent process.
** SIGUSR1 
   - Receives notificatio from the child process. 
   - Displays a termination message and exits gracefully.
** the program remains idle using pause() until a signal is received.           

===============================================================================
*/
