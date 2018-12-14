typedef struct Player
{	
	int Points;
}

void newgame(Player NewPlayer);
int getPoint(Player thePlayer);
void setWord(char word);
int guessLetter(char letter);
int guessWord(char Word);
