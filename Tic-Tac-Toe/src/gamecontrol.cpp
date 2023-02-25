

int playerTurn(int player, char *gameState, int play) 
{
    char token;
    if (player == 1)
    {
        token = 'X';
    }
    else 
    {
        token = 'O';
    }
    
    if (gameState[play] != ' ')
    {
        return -1;
    }
    
    gameState[play] = token;

    return 0;
}

int getPlayer(char player)
{
    /*if (player == 'X'){
        return 1;
    }else{
        return 2;
    }*/
    return (player == 'X') ? 1 : 2;
}

int winnerCheck(char *gameState)
{
    // Check first row
    if ((gameState[0]==gameState[1])&&(gameState[1]==gameState[2]) && (gameState[0]!=' '))
    {
        return getPlayer(gameState[0]);
    }
    // Check second row
    if ((gameState[3]==gameState[4])&&(gameState[4]==gameState[5]) && (gameState[3]!=' '))
    {
        return getPlayer(gameState[3]);
    }
    // Check third row
    if ((gameState[6]==gameState[7])&&(gameState[7]==gameState[8]) && (gameState[6]!=' '))
    {
        return getPlayer(gameState[6]);
    }
    
    // Check first column
    if ((gameState[0]==gameState[3])&&(gameState[3]==gameState[6]) && (gameState[0]!=' '))
    {
        return getPlayer(gameState[0]);
    }
    // Check second column
    if ((gameState[1]==gameState[4])&&(gameState[4]==gameState[7]) && (gameState[1]!=' '))
    {
        return getPlayer(gameState[1]);
    }
    // Check third column
    if ((gameState[2]==gameState[5])&&(gameState[5]==gameState[8]) && (gameState[2]!=' '))
    {
        return getPlayer(gameState[2]);
    }
    
    // Check left diagonal
    if ((gameState[0]==gameState[4])&&(gameState[4]==gameState[8]) && (gameState[0]!=' '))
    {
        return getPlayer(gameState[0]);
    }
    // Check right diagonal
    if ((gameState[2]==gameState[4])&&(gameState[4]==gameState[6]) && (gameState[2]!=' '))
    {
        return getPlayer(gameState[2]);
    }
    
    return 0;
}