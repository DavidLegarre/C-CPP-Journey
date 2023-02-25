#include <stdlib.h>
#include <iostream>
#include <stdio.h>

void render(char *gameState) 
{
    system("clear");
    printf("Player 1 (X)    Player 2 (O)\n\n");

    printf("       |       |       \n");
    printf("    %c  |   %c   |   %c  \n", gameState[0],gameState[1],gameState[2]);

    
    printf("_______|_______|_______\n");
    printf("       |       |       \n");

    printf("    %c  |   %c   |   %c  \n", gameState[3],gameState[4],gameState[5]);
    printf("_______|_______|_______\n");
    printf("       |       |       \n");

    printf("    %c  |   %c   |   %c  \n", gameState[6],gameState[7],gameState[8]);
    printf("       |       |       \n");
    
    printf("\n");
}