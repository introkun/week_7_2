﻿#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int hero, computer, i, statisticsHero = 0, statisticsComputer = 0;

	srand(time(NULL));

	cout << "игра в кубики, бросается по 2 кубика, побеждает тот у кого больше число!!\n чтоб бросать кубики нажимайте клавишу Enter\n";

	for (int j = 1, i = 1; i <= 12; i++)
	{
		int cube = rand() % 6 + 1;

		if (i % 4 == 1)
		{
			hero = 0;
			cout << "раунд № " << j << "\n игрок : " "\n";
			cin.get();
			j++;
		}
		else if (i % 4 == 3)
		{
			computer = 0;
			cout << "компьютер : ""\n";
		}
		if (i % 4 == 1 || i % 4 == 2)
		{
			hero += cube;
			statisticsHero += cube;
		}
		else
		{
			computer += cube;
			statisticsComputer += cube;
		}

		switch (cube)
		{
		case 1:
		{
			cout << "  _________\n" " /________/|\n" "|         ||\n" "|         ||\n" "|    O    ||\n" "|         ||\n" "|_________|/\n";
		} break;
		case 2:
		{
			cout << "  _________\n" " /________/|\n" "|         ||\n" "|  O      ||\n" "|         ||\n" "|      O  ||\n" "|_________|/\n";
		} break;
		case 3:
		{
			cout << "  _________\n" " /________/|\n" "|         ||\n" "|  O      ||\n" "|    O    ||\n" "|      O  ||\n" "|_________|/\n";
		} break;
		case 4:
		{
			cout << "  _________\n" " /________/|\n" "|         ||\n" "|  O   O  ||\n" "|         ||\n" "|  O   O  ||\n" "|_________|/\n";
		} break;
		case 5:
		{
			cout << "  _________\n" " /________/|\n" "|         ||\n" "|  O   O  ||\n" "|    O    ||\n" "|  O   O  ||\n" "|_________|/\n";
		} break;
		case 6:
		{
			cout << "  _________\n" " /________/|\n" "|         ||\n" "|  O O O  ||\n" "|         ||\n" "|  O O O  ||\n" "|_________|/\n";
		} break;
		default:
			break;
		}

		if (i % 4 == 0)
		{
			if (hero > computer)
			{
				cout << "в раунд № " << j - 1 << " выиграл игрок\n";
			}
			else if (hero == computer)
			{
				cout << "в раунд № " << j - 1 << " ничья\n";
			}
			else
			{
				cout << "в раунд № " << j - 1 << " выиграл компютер\n";
			}
		}
	}

	if (statisticsHero > statisticsComputer)
	{
		cout << "в игре " " выиграл игрок\n счёт:\n игрок " << statisticsHero << " : компютер " << statisticsComputer;
	}
	else if (statisticsHero == statisticsComputer)
	{
		cout << "в игре " " ничья\n счёт:\n игрок " << statisticsHero << " : компютер " << statisticsComputer;
	}
	else
	{
		cout << "в игре " " выиграл компютер\n счёт:\n игрок " << statisticsHero << " : компютер " << statisticsComputer;
	}

	cout << endl;
	return 0;
}