#include <rendering.hpp>
#include <stdio.h>

int main()
{
    // Define Variables
    const int width = 3;
    const int height = 3;

    // Store the state of the board
    char gamestate[width*height];
    
    for (int i = 0; i < width*height; i++)
    {
        gamestate[i] = ' ';
    }

    // Draw the initial board
    render(gamestate);

    return 0;
}