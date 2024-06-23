#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
void difficult()
{
	srand(time(0));
	int secret_Number = 1 + (rand() % 100);
	int player_Choice;
	cout << "\nYou have 5 choices for finding the secret number between 1 to 100.";
	int choices_Left = 5;
	for (int i = 1; i <= 5; i++) 
	{
	    cout << "\n\nEnter the number:";
		cin >> player_Choice;
		if (player_Choice == secret_Number) 
		{
			cout << "\n\nWell played! You won, "<< player_Choice<< " is the secret number\n";
			cout << "\t\t\t Thanks for playing....\n";
			cout << "\nPlay the game again with us!!\n\n\n";
			break;
		}
		else 
		{
			cout << "\nOops, "<< player_Choice<< " is not the right number\n";
			if (player_Choice > secret_Number)
			{
				cout << "The secret number is smaller than the number you have chosen \n";
			}
			else
			{
				cout << "The secret number is greater than the number you have chosen \n";
			}
			choices_Left--;
			cout << choices_Left << " choices left. \n";
			if (choices_Left == 0) 
			{
				cout << "You couldn't find the secret number, it was"<< secret_Number<< ", You lose!!\n\n";
				cout << "Play the game again to win!!!\n\n";
			}
		}
	}
}
void medium()
{
	srand(time(0));
	int secret_Number = 1 + (rand() % 100);
	int player_Choice;
	cout << "\nYou have 7 choices for finding the secret number between 1 to 100.";
	int choices_Left = 7;
	for (int i = 1; i <= 7; i++) 
	{
		cout << "\n\nEnter the number: ";
		cin >> player_Choice;
		if (player_Choice == secret_Number) 
		{
			cout << "\n\nWell played! You won, "<< player_Choice<< " is the secret number\n";
			cout << "\t\t\t Thanks for playing....\n";
			cout << "Play the game again with us!!\n\n\n";
			break;
		}
		else 
		{
	    	cout << "\nOops, " << player_Choice<< " is not the right number\n";
			if (player_Choice > secret_Number) 
			{
				cout << "The secret number is smaller than the number you have chosen \n";
			}
			else 
			{
				cout << "The secret number is greater than the number you have chosen \n";
			}
			choices_Left--;
			cout << choices_Left << " choices left. \n";
			if (choices_Left == 0) 
			{
				cout << "You couldn't find the secret number, it was"<< secret_Number<< ", You lose!!\n\n";
				cout << "Play the game again to win!!!\n\n";
			}
		}
	}
}
void easy()
{
	srand(time(0));
	int secret_Number = 1 + (rand() % 100);
	int player_Choice;
	cout << "\nYou have 10 choices for finding the secret number between 1 to 100.";
	int choices_Left = 10;
	for (int i = 1; i <= 10; i++) 
	{
		cout << "\n\nEnter the number:";
		cin >> player_Choice;
		if (player_Choice == secret_Number) 
		{
			cout << "\n\nWell played! You won, "<< player_Choice<< " is the secret number\n";
			cout << "\t\t\t Thanks for playing....\n";
			cout << "Play the game again with us!!\n\n\n ";
			break;
		}
		else 
		{
		    cout << "\nOops, " << player_Choice<< " is not the right number\n";
			if (player_Choice > secret_Number)
			{
				cout << "The secret number is smaller than the number you have chosen\n";
			}
			else 
			{
				cout << "The secret number is greater than the number you have chosen \n";
			}
			choices_Left--;
			cout << choices_Left << " choices left. \n";
			if (choices_Left == 0)
			{
				cout << "You couldn't find the secret number, it was"<< secret_Number<< ", You lose!!\n\n";
				cout << "Play the game again to win!!!\n\n";
			}
		}
   }
}
int main()
{
	int Choice;
	cout << "\n\n\t\t\t\t\t \t\t\t\tWelcome to Guess The Number Game...!\n";
	cout << "\n \tYou have to guess a number between 1 to 100. ";
	cout <<	"\n \tYou'll have limited choices based on the level you choose.";
	cout <<	"\n \t\t\t\t\t\t\t\t\t\tGood Luck!\n\n";
	do
	{	
		cout << "\n Level: \n\n";
		cout << "1 For easy\n";
		cout << "2 For medium\n";
		cout << "3 For difficult\n";
		cout << "0 For ending the game\n\n\n";
		cout << "Choose Level: ";
		cin >>Choice;
        switch(Choice)
        {

			case 1: easy();
					break;
			case 2:
					medium();
				    break;
			case 3:
					difficult();
			    	break;
			case 0:
					exit(0);
					break;
		}
   }while(Choice<5);
	return 0;
}
