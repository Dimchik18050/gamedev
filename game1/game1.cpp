// Guess My Number
// Classic number guessing game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	const int numberRange = 100;
	int computerNumber = 0;
	int playerNumber = 0;
	
	time_t currentTime = time(0);
	
	srand( currentTime );
	computerNumber = rand();
	computerNumber = computerNumber % ( numberRange + 1 );
	
	printf("Computer set number: %i Range: %i to %i \n", computerNumber, 0, numberRange);
	
	printf("Input your number: ");
	scanf("%i", &playerNumber);
	
	if( playerNumber < computerNumber )
	{
		printf("Larger!\n");
	}
	else
	{
		if ( playerNumber > computerNumber )
		{
			printf("Less!\n");
		}
		else
		{
			printf("Yeaah!!\n");
		}
	}
	
}
