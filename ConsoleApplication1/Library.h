#pragma once
#include <iostream>
class Library
{

};

void Answercheck(std::string answer, std::string input)
{
	if (answer == input)
	{
		std::cout << "Nice Work!\n\n";
	}
	else
	{
		std::cout << "Incorrect, -50 Full Sail GPS...";
	}
}
void PointlessIntroFunction()
{
	std::cout << "Welcome grader, to YOUR test. Should you win, you may try again.\nShould you lose, you must give me extra credit!!\n*Que Maniacal Laughter*\nYou will be prompted with four questions presented in a random order.\nShould you guess one right, you move on to the next question...\nShould you guess one wrong however, then you will lose one of your LIVES.\nIf you manage to lose all three LIVES, you must award me 1 point of extra credit!\nIf you manage to escape with lives left...\n\n...\n\n..well good job I guess.\n";
	std::cout << "\nPress Enter to Continue";
	std::cin.ignore();
}
int randomnumbergenerator()
{
	int randNum = rand() % (4 - 1 + 1) + 1;
	return randNum;
}
void MultipleChoiceSwitch()
{
	bool HasThisOccurred1 = false;
	bool HasThisOccurred2 = false;
	bool HasThisOccurred3 = false;
	bool HasThisOccurred4 = false;
	int lives = 3;
	int completion = 0;
	while (lives != 0)
	{
		if (completion != 4)
		{
			switch (randomnumbergenerator())
		{
			//question 1
		case 1:
		{
			if (HasThisOccurred1 == false)
			{
				int answer;
				std::cout << "Next Question: Press Enter to Continue\n";
				std::cin.ignore();
				std::cout << "How much wood could a wood chuck chuck if a woodchuck could chuck wood?\n\n";
				std::cout << "(1) One or two solid logs.\n";
				std::cout << "(2) Approxamately 32 Metric Tons.\n";
				std::cout << "(3) Woodchucks are animals incapable of chucking wood.\n";
				std::cout << "(4) A woodchuck could chuck as much as a woodchuck would chuck if a would chuck could chuck wood.\n\n";
				std::cout << "Use the numbers 1, 2, 3, or 4 as seen above to select your corresponding answer, then press enter...\n";
				std::cin >> answer;
				switch (answer)
				{
				case 1:
				{

					std::cin.ignore();
					system("cls");
					std::cout << "Incorrect! ... -1 Life\n";
					std::cout << "Press Enter to Continue\n";
					std::cin.ignore();
					lives--;
					system("cls");
					std::cout << "You have " << lives << " more attempt(s)...\n";
					std::cout << "Press Enter to Continue\n";
					std::cin.ignore();
					break;
				}
				case 2:
				{
					std::cin.ignore();
					system("cls");
					std::cout << "Incorrect! ... -1 Life\n";
					std::cout << "Press Enter to Continue\n";
					std::cin.ignore();
					lives--;
					system("cls");
					std::cout << "You have " << lives << " more attempt(s)...\n";
					std::cout << "Press Enter to Continue\n";
					std::cin.ignore();
					break;
				}
				case 3:
				{
					std::cin.ignore();
					system("cls");
					std::cout << "Incorrect! ... -1 Life\n";
					std::cout << "Press Enter to Continue\n";
					std::cin.ignore();
					lives--;
					system("cls");
					std::cout << "You have " << lives << " more attempt(s)...\n";
					std::cout << "Press Enter to Continue\n";
					std::cin.ignore();
					break;
				}
				case 4:
				{
					system("cls");
					std::cout << "Correct answer! You're pretty smart!\n\n";
					std::cin.ignore();
					completion++;
					HasThisOccurred1 = true;
					break;
				}
				default:
				{
					std::cout << "That was not a valid input... please try again\n";
					break;
				}
				break;
				}

			}
		}
		//Question 2
		case 2:
		{
			if (HasThisOccurred2 == false)
			{
				int answer;
				system("cls");
				std::cout << "Next Question: Press Enter to Continue\n";
				std::cin.ignore();
				std::cout << "Knock Knock! Guess who's there!\n";
				std::cout << "(1) Banana.\n";
				std::cout << "(2) There's no door.\n";
				std::cout << "(3) Orange You glad I didn't say banana.\n";
				std::cout << "(4) Apple.\n\n";
				std::cout << "Use the numbers 1, 2, 3, or 4 as seen above to select your corresponding answer, then press enter...\n";
				std::cin >> answer;

				switch (answer)
				{
				case 1:
				{
					system("cls");
					std::cout << "Correct answer! You're pretty smart!\n\n";
					std::cin.ignore();
					completion++;
					HasThisOccurred2 = true;
					break;
				}
				case 2:
				{
					std::cin.ignore();
					system("cls");
					std::cout << "Incorrect! ... -1 Life\n";
					std::cout << "Press Enter to Continue\n";
					std::cin.ignore();
					lives--;
					system("cls");
					std::cout << "You have " << lives << " more attempt(s)...\n";
					std::cout << "Press Enter to Continue\n";
					std::cin.ignore();
					break;
				}
				case 3:
				{
					std::cin.ignore();
					system("cls");
					std::cout << "Incorrect! ... -1 Life\n";
					std::cout << "Press Enter to Continue\n";
					std::cin.ignore();
					lives--;
					system("cls");
					std::cout << "You have " << lives << " more attempt(s)...\n";
					std::cout << "Press Enter to Continue\n";
					std::cin.ignore();
					break;
				}
				case 4:
				{
					std::cin.ignore();
					system("cls");
					std::cout << "Incorrect! ... -1 Life\n";
					std::cout << "Press Enter to Continue\n";
					std::cin.ignore();
					lives--;
					system("cls");
					std::cout << "You have " << lives << " more attempt(s)...\n";
					std::cout << "Press Enter to Continue\n";
					std::cin.ignore();
					break;
				}
				default:
				{
					std::cout << "That was not a valid input... please try again\n";
					break;
				}
				break;
				}
			}
		}
		//question 3
		case 3:
		{
			if (HasThisOccurred3 == false)
			{
				int answer;
				std::cout << "Next Question: Press Enter to Continue\n";
				std::cin.ignore();
				std::cout << "Who's the coolest SWE teacher in the world?\n";
				std::cout << "(1) John Fecko\n";
				std::cout << "(2) Some other Full Sail teacher dude\n";
				std::cout << "(3) Anyone other than John Fecko\n";
				std::cout << "(4) Joe Momma\n\n";
				std::cout << "Use the numbers 1, 2, 3, or 4 as seen above to select your corresponding answer, then press enter...\n";
				std::cin >> answer;

				switch (answer)
				{
				case 1:
				{
					system("cls");
					std::cout << "Correct answer! You're pretty smart!\n\n";
					std::cin.ignore();
					completion++;
					HasThisOccurred3 = true;
					break;
				}
				case 2:
				{
					std::cin.ignore();
					system("cls");
					std::cout << "Incorrect! ... -1 Life\n";
					std::cout << "Press Enter to Continue\n";
					std::cin.ignore();
					lives--;
					system("cls");
					std::cout << "You have " << lives << " more attempt(s)...\n";
					std::cout << "Press Enter to Continue\n";
					std::cin.ignore();
					break;
				}
				case 3:
				{
					std::cin.ignore();
					system("cls");
					std::cout << "Incorrect! ... -1 Life\n";
					std::cout << "Press Enter to Continue\n";
					std::cin.ignore();
					lives--;
					system("cls");
					std::cout << "You have " << lives << " more attempt(s)...\n";
					std::cout << "Press Enter to Continue\n";
					std::cin.ignore();
					break;
				}
				case 4:
				{
					std::cin.ignore();
					system("cls");
					std::cout << "Incorrect! ... -1 Life\n";
					std::cout << "Press Enter to Continue\n";
					std::cin.ignore();
					lives--;
					system("cls");
					std::cout << "You have " << lives << " more attempt(s)...\n";
					std::cout << "Press Enter to Continue\n";
					std::cin.ignore();
					break;
				}
				default:
				{
					std::cout << "That was not a valid input... please try again\n";
					break;
				}
				break;
				}
			}
		}
		//question 4
		case 4:
		{
			if (HasThisOccurred4 == false)
			{
				int answer;
				system("cls");
				std::cout << "Next Question: Press Enter to Continue\n";
				std::cin.ignore();
				std::cout << "Which multibillion dollor corporation was founded on September 4, 1998, Menlo Park, California?\n\n";
				std::cout << "(1) Full Sail\n";
				std::cout << "(2) Apple\n";
				std::cout << "(3) Google\n";
				std::cout << "(4) Monsters Inc.\n\n";
				std::cout << "Use the numbers 1, 2, 3, or 4 as seen above to select your corresponding answer, then press enter...\n";
				std::cin >> answer;
				switch (answer)
				{
				case 1:
				{
					std::cin.ignore();
					system("cls");
					std::cout << "Incorrect! ... -1 Life\n";
					std::cout << "Press Enter to Continue\n";
					std::cin.ignore();
					lives--;
					system("cls");
					std::cout << "You have " << lives << " more attempt(s)...\n";
					std::cout << "Press Enter to Continue\n";
					std::cin.ignore();
					break;
				}
				case 2:
				{
					std::cin.ignore();
					system("cls");
					std::cout << "Incorrect! ... -1 Life\n";
					std::cout << "Press Enter to Continue\n";
					std::cin.ignore();
					lives--;
					system("cls");
					std::cout << "You have " << lives << " more attempt(s)...\n";
					std::cout << "Press Enter to Continue\n";
					std::cin.ignore();
					break;
				}
				case 3:
				{
					system("cls");
					std::cout << "Correct answer! You're pretty smart!\n\n";
					std::cin.ignore();
					completion++;
					HasThisOccurred4 = true;
					break;
				}
				case 4:
				{
					std::cin.ignore();
					system("cls");
					std::cout << "Incorrect! ... -1 Life\n";
					std::cout << "Press Enter to Continue\n";
					std::cin.ignore();
					lives--;
					system("cls");
					std::cout << "You have " << lives << " more attempt(s)...\n";
					std::cout << "Press Enter to Continue\n";
					std::cin.ignore();
					break;
				}
				default:
				{
					std::cout << "That was not a valid input... please try again\n";
					break;
				}
				break;
				}

			}
		}
		}
		}
		else
		{
			std::cout << "Congrats! You win! I never doubted you!\n";
			lives = 0;
		}
	}
}
