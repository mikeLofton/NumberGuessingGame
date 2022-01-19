#include <iostream>
#include <time.h>

bool gameOver = false;

int main()
{
	srand(time(0));
	int lowerBound = 1;
	int upperBound = 100;

	std::cout << "Think of a number between " << lowerBound << " and " << upperBound << std::endl;
	system("PAUSE");
	while (!gameOver)
	{
		
		int input;

		
		int numToSelect = rand() % (upperBound - lowerBound) + lowerBound;

		std::cout << numToSelect << std::endl;

		std::cout << "Is this you number?\n1: YES\n2: NO" << std::endl;
		std::cin >> input;

		if (input == 1)
		{
			system("cls");
			std::cout << "I GOT IT!" << std::endl;
			gameOver = true;
			break;
		}
		
		std::cout << "Is your number lower or higher?\n1: LOWER\n2: HIGHER" << std::endl;
		std::cin >> input;

		if (input == 1)
		{
			upperBound = numToSelect - 1;
		}

		if (input == 2)
		{
			lowerBound = numToSelect + 1;
		}
		
		if (lowerBound == upperBound)
		{
			std::cout << "CHEATER! Start Over" << std::endl;
			gameOver = true;
			break;
		}

		system("cls");

	}
	return 0;
}