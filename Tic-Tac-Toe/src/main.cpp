#include <rendering.hpp>
#include <gamecontrol.hpp>
#include <stdio.h>
#include <iostream>
#include <string>

bool isGameEnded(char *gameState) 
{
    for (int i = 0; i < 9; i++)
    {
        if (gameState[i]==' ')
        {
            return false;
        }
    }
    
    return true;
    
}

int main()
{
    // Define Variables
    const int width = 3;
    const int height = 3;

    bool gameEnded = false;
    int numTurns = 0;
    // Used to hold the input of user
    char tmp[12];
    // Player can be 1 (X) or 2 (O)
    int player = 1;
    int play;
    int winner = 0;

    // Store the state of the board
    char gameState[width*height];
    
    for (int i = 0; i < width*height; i++)
    {
        gameState[i] = ' ';
    }

    // Draw the initial board
    render(gameState);
    
    while (!gameEnded)
    {
        //printf("Player %d turn:\n", player);
        std::cout << "Player " << player << " Turn: " << std::endl;
        std::cin >> tmp;
        play = std::stoi(tmp)-1;
        playerTurn(player, gameState, play);
        render(gameState);
        if (player % 2 == 0)
        {
            player = 1;
        } else
        {
            player = 2;
        }
        numTurns++;
        winner = winnerCheck(gameState);
        if (winner == 1)
        {
            printf("Player %d wins!\n", winner);
            gameEnded = true;
        }else if (winner == 2)
        {
            printf("Player %d wins!\n", winner);
            gameEnded = true;
        } else 
        {
            gameEnded = isGameEnded(gameState);
        }
    }

    return 0;
}


