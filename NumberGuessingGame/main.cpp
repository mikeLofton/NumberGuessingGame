#include <iostream>
#include <time.h>

bool gameOver = false;

int main()
{
	srand(time(0));
	int lowerBound = 1;
	int upperBound = 100;
	int range = upperBound - lowerBound;

	//Tell user to think of a number within range
	std::cout << "Think of a number between " << lowerBound << " and " << upperBound << std::endl;
	system("PAUSE");

	while (!gameOver)
	{	
		int input = 0;
		
		int numToSelect = (rand() % range) + lowerBound;

		std::cout << numToSelect << std::endl;
		
		//Ask if number is lower, higher, or equal
		std::cout << "Is your number lower, higher, or equal?\n1: LOWER\n2: HIGHER\n3: EQUAL" << std::endl;
		std::cin >> input;

		if (input == 1)
		{
			upperBound = numToSelect - 1;
		}
		else if (input == 2)
		{
			lowerBound = numToSelect + 1;
		}
		else if (input == 3)
		{
			system("cls");
			std::cout << "I GOT IT!" << std::endl;
			gameOver = true;
			break;
		}

		range = upperBound - lowerBound;
		if (range <= 0)
		{
			std::cout << "CHEATER! Start Over" << std::endl;
			gameOver = true;
			break;
		}

		
		system("cls");

	}
	return 0;
}