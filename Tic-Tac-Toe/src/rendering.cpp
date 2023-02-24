#include <stdlib.h>
#include <iostream>
#include <stdio.h>

void render(char *gamestate) 
{
    system("clear");
    printf("Player 1 (X)    Player 2 (O)\n\n");

    printf("       |       |       \n");
    printf("    %c  |   %c   |   %c  \n", gamestate[0],gamestate[1],gamestate[2]);

    
    printf("_______|_______|_______\n");
    printf("       |       |       \n");

    printf("    %c  |   %c   |   %c  \n", gamestate[3],gamestate[4],gamestate[5]);
    printf("_______|_______|_______\n");
    printf("       |       |       \n");

    printf("    %c  |   %c   |   %c  \n", gamestate[6],gamestate[7],gamestate[8]);
    printf("       |       |       \n");
    
    printf("\n")
}