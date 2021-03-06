// RPSLSGDTG - 01.cpp : Defines the entry point for the console application.
//

#include "iostream"
#include "cstdlib"
#include "ctime"
using namespace std;

int userChoice;     // To hold the userChoice's choice
int computerChoice; // To hold the computerChoiceuter's choice
int choice;



//function prototypes
int getuserChoice(int);

int getcomputerChoice();

void determineWinner(int, int);

void displayChoice(int userChoice, int computerChoice);




//*************************************************
//Function main
//*************************************************
int main()
{


	// Get the computerChoiceuter's choice.
	computerChoice = getcomputerChoice();

	// Get the userChoice's choice.
	userChoice = getuserChoice(choice);

	while (userChoice != 10)
	{
		//Displays selections
		displayChoice(userChoice, computerChoice);

		// Determine the winner.
		determineWinner(userChoice, computerChoice);

		// Get the computerChoiceuter's choice.
		computerChoice = getcomputerChoice();

		// Get the userChoice's choice.
		userChoice = getuserChoice(choice);
	}//end while

	return 0;
}
//end main






// The getuserChoice function displays a menu allowing
// the userChoice to select rock, paper, or scissors. The
// function then returns 1 for rock (via the ROCK
// constant), or 2 for paper (via the PAPER constant),
// or 3 for scissors (via the SCISSORS constant).
int getuserChoice(int choice)
{
	cout << "\n\nROCK PAPER SCISSORS LIZARD SPOCK GUN DOG TRUMP FART!!!";
	cout << "\n---------\n1) Rock\n2) Paper\n3) Scissors\n4) Lizard\n5) Spock\n6) Gun\n7) Dog\n8) Trump\n9) Fart\n10) Quit\n\n";
	cout << "Enter your choice:";
	cin >> choice;
	return choice;
}//end getuserChoice




 // The getcomputerChoice function returns the computerChoiceuter's
 // game choice. It returns 1 for rock (via the ROCK
 // constant), or 2 for paper (via the PAPER constant),
 // or 3 for scissors (via the SCISSORS constant).
int getcomputerChoice()
{
	int number;
	int seed = time(0);//gets system time
	srand(seed);//seed the random number

	number = 1 + rand() % 9;//generate random # 1-9
	return number;
}//end getcomputerChoice






 // The displayChoice function accepts an integer
 // argument and displays rock, paper, or scissors.
void displayChoice(int userChoice, int computerChoice)
{

	//displays what you&the computerChoice selected 
	if (userChoice == 1)
	{
		cout << "You selected: Rock\n";
	}//end if

	else if (userChoice == 2)
	{
		cout << "You selected: Paper\n";
	}//end else if

	else if (userChoice == 3)
	{
		cout << "You selected: Scissors\n";
	}//end else if #2

	else if (userChoice == 4)
	{
		cout << "You selected: Lizard\n";
	}//end else if #3

	else if (userChoice == 5)
	{
		cout << "You selected: Spock\n";
	}

	else if (userChoice == 6)
	{
		cout << "You selected: Gun\n";
	}

	else if (userChoice == 7)
	{
		cout << "You selected: Dog\n";
	}

	else if (userChoice == 8)
	{
		cout << "You selected: Trump\n";
	}

	else if (userChoice == 9)
	{
		cout << "You selected: Fart\n";
	}


	if (computerChoice == 1)
	{
		cout << "The computer selected: Rock\n";
	}//end if

	else if (computerChoice == 2)
	{
		cout << "The computer selected: Paper\n";
	}//end else if

	else if (computerChoice == 3)
	{
		cout << "The computer selected: Scissors\n";
	}//end else if #2
	else if (computerChoice == 4)
	{
		cout << "The computer selected: Lizard\n";
	}//end else if #3

	else if (computerChoice == 5)
	{
		cout << "The computer selected: Spock\n";
	}

	else if (computerChoice == 6)
	{
		cout << "The computer selected: Gun\n";
	}

	else if (computerChoice == 7)
	{
		cout << "The computer selected: Dog\n";
	}

	else if (computerChoice == 8)
	{
		cout << "The computer selected: Trump\n";
	}

	else if (computerChoice == 9)
	{
		cout << "The computer selected: Fart\n";
	}

}






// The determineWinner function accepts the userChoice's
// game choice and the computerChoiceuter's game choice as
// arguments and displays a message indicating
// the winner.
void determineWinner(int userChoice, int computerChoice)
{
	//determines winner 
	if (userChoice == computerChoice)
	{
		cout << "Tie. NO WINNER.\n\n" << endl;
	}

	if (userChoice == 3 && computerChoice == 2) 
	{
		cout << "Scissors cut paper. You Win!\n\n";
	}
	else if (userChoice == 2 && computerChoice == 1) 
	{
		cout << "Paper covers rock. You Win!\n\n";
	}
	if (userChoice == 1 && computerChoice == 4) 
	{
		cout << "Rock crushes lizard. You Win!\n\n";
	}
	else if (userChoice == 4 && computerChoice == 5) 
	{
		cout << "Lizard poisons Spock. You Win!\n\n";
	}
	if (userChoice == 5 && computerChoice == 3) 
	{
		cout << "Spock smashes scissors. You Win!\n\n";
	}
	else if (userChoice == 3 && computerChoice == 4) 
	{
		cout << "Scissors decapitated lizard. You Win!\n\n";
	}
	if (userChoice == 4 && computerChoice == 2) 
	{
		cout << "Lizard eats paper. You Win!\n\n";
	}
	else if (userChoice == 2 && computerChoice == 5) 
	{
		cout << "Paper disproves Spock. You Win!\n\n";
	}
	if (userChoice == 5 && computerChoice == 1) 
	{
		cout << "Spock teleports rock. You Win!\n\n";
	}
	else if (userChoice == 1 && computerChoice == 3) 
	{
		cout << "Rock breaks scissors. You Win!\n\n";
	}
	if (userChoice == 9 && computerChoice == 3) 
	{
		cout << "Fart crystallizes Scissors. You Win!\n\n";
	}
	else if (userChoice == 7 && computerChoice == 3) 
	{
		cout << "Dog buries Scissors. You Win!\n\n";
	}
	if (userChoice == 6 && computerChoice == 7) 
	{
		cout << "Gun scares Dog. You Win!\n\n";
	}
	else if (userChoice == 5 && computerChoice == 9) 
	{
		cout << "Spock vaporizes Fart. You Win!\n\n";
	}
	if (userChoice == 5 && computerChoice == 1) 
	{
		cout << "Spock teleports Rock. You Win!\n\n";
	}
	else if (userChoice == 8 && computerChoice == 5) 
	{
		cout << "Trump fires Spock. You Win!\n\n";
	}
	if (userChoice == 4 && computerChoice == 8) 
	{
		cout << "Lizard freaks out Trump. You Win!\n\n";
	}
	else if (userChoice == 6 && computerChoice == 2) 
	{
		cout << "Gun burns Paper. You Win!\n\n";
	}
	if (userChoice == 1 && computerChoice == 6) 
	{
		cout << "Rock smashes Gun. You Win!\n\n";
	}
	else if (userChoice == 9 && computerChoice == 6) 
	{
		cout << "Fart explodes Gun. You Win!\n\n";
	}
	if (userChoice == 9 && computerChoice == 7) 
	{
		cout << "Fart stuns Dog. You Win!\n\n";
	}
	else if (userChoice == 7 && computerChoice == 5) 
	{
		cout << "Dog bites Spock. You Win!\n\n";
	}
	if (userChoice == 3 && computerChoice == 6) 
	{
		cout << "Scissors jam Gun. You Win!\n\n";
	}
	else if (userChoice == 1 && computerChoice == 8) 
	{
		cout << "Rock pulverizes Trump. You Win!\n\n";
	}
	if (userChoice == 9 && computerChoice == 8) 
	{
		cout << "Fart knockouts Trump. You Win!\n\n";
	}
	else if (userChoice == 8 && computerChoice == 6) 
	{
		cout << " Trump buys Gun. You Win!\n\n";
	}
	if (userChoice == 9 && computerChoice == 2)
	{
		cout << "Fart wrinkles Paper. You Win!\n\n";
	}
	else if (userChoice == 1 && computerChoice == 9) 
	{
		cout << "Rock blocks Fart. You Win!\n\n";
	}
	if (userChoice == 5 && computerChoice == 6) 
	{
		cout << "Spock disarms Gun. You Win!\n\n";
	}
	else if (userChoice == 7 && computerChoice == 1) 
	{
		cout << "Dog soils Rock. You Win!\n\n";
	}
	if (userChoice == 6 && computerChoice == 4) 
	{
		cout << "Gun shoots Lizard. You Win!\n\n";
	}
	else if (userChoice == 8 && computerChoice == 2) 
	{
		cout << "Trump litters Paper. You Win!\n\n";
	}
	if (userChoice == 8 && computerChoice == 3) 
	{
		cout << "Trump abuse Scissors. You Win!\n\n";
	}
	else if (userChoice == 7 && computerChoice == 8) 
	{
		cout << "Dog chases Trump. You Win!\n\n";
	}
	if (userChoice == 4 && computerChoice == 7) 
	{
		cout << "Lizard hypnotizes Dog. You Win!\n\n";
	}


	// losing senarios


	if (computerChoice == 3 && userChoice == 2) 
	{
		cout << "Scissors cut paper. You Lose!\n\n";
	}
	else if (computerChoice == 2 && userChoice == 1) 
	{
		cout << "Paper covers rock. You Lose!\n\n";
	}
	if (computerChoice == 1 && userChoice == 4) 
	{
		cout << "Rock crushes lizard. You Lose!\n\n";
	}
	else if (computerChoice == 4 && userChoice == 5) 
	{
		cout << "Lizard poisons Spock. You Lose!\n\n";
	}
	if (computerChoice == 5 && userChoice == 3) 
	{
		cout << "Spock smashes scissors. You Lose!\n\n";
	}
	else if (computerChoice == 3 && userChoice == 4) 
	{
		cout << "Scissors decapitated lizard. You Lose!\n\n";
	}
	if (computerChoice == 4 && userChoice == 2) 
	{
		cout << "Lizard eats paper. You Lose!\n\n";
	}
	else if (computerChoice == 2 && userChoice == 5) 
	{
		cout << "Paper disproves Spock. You Lose!\n\n";
	}
	if (computerChoice == 5 && userChoice == 1) 
	{
		cout << "Spock teleports rock. You Lose!\n\n";
	}
	else if (computerChoice == 1 && userChoice == 3) 
	{
		cout << "Rock breaks scissors. You Lose!\n\n";
	}
	if (computerChoice == 9 && userChoice == 3) 
	{
		cout << "Fart crystallizes Scissors. You Lose!\n\n";
	}
	else if (computerChoice == 7 && userChoice == 3) 
	{
		cout << "Dog buries Scissors. You Lose!\n\n";
	}
	if (computerChoice == 6 && userChoice == 7) 
	{
		cout << "Gun scares Dog. You Lose!\n\n";
	}
	else if (computerChoice == 5 && userChoice == 9) 
	{
		cout << "Spock vaporizes Fart. You Lose!\n\n";
	}
	if (computerChoice == 5 && userChoice == 1) 
	{
		cout << "Spock teleports Rock. You Lose!\n\n";
	}
	else if (computerChoice == 8 && userChoice == 5) 
	{
		cout << "Trump fires Spock. You Lose!\n\n";
	}
	if (computerChoice == 4 && userChoice == 8) 
	{
		cout << "Lizard freaks out Trump. You Lose!\n\n";
	}
	else if (computerChoice == 6 && userChoice == 2) 
	{
		cout << "Gun burns Paper. You Lose!\n\n";
	}
	if (computerChoice == 1 && userChoice == 6) 
	{
		cout << "Rock smashes Gun. You Lose!\n\n";
	}
	else if (computerChoice == 9 && userChoice == 6) 
	{
		cout << "Fart explodes Gun. You Lose!\n\n";
	}
	if (computerChoice == 9 && userChoice == 7) 
	{
		cout << "Fart stuns Dog. You Lose!\n\n";
	}
	else if (computerChoice == 7 && userChoice == 5) 
	{
		cout << "Dog bites Spock. You Lose!\n\n";
	}
	if (computerChoice == 3 && userChoice == 6) 
	{
		cout << "Scissors jam Gun. You Lose!\n\n";
	}
	else if (computerChoice == 1 && userChoice == 8) 
	{
		cout << "Rock pulverizes Trump. You Lose!\n\n";
	}
	if (computerChoice == 9 && userChoice == 8) 
	{
		cout << "Fart knockouts Trump. You Lose!\n\n";
	}
	else if (computerChoice == 8 && userChoice == 6) 
	{
		cout << " Trump buys Gun. You Lose!\n\n";
	}
	if (computerChoice == 9 && userChoice == 2) 
	{
		cout << "Fart wrinkles Paper. You Lose!\n\n";
	}
	else if (computerChoice == 1 && userChoice == 9) 
	{
		cout << "Rock blocks Fart. You Lose!\n\n";
	}
	if (computerChoice == 5 && userChoice == 6) 
	{
		cout << "Spock disarms Gun. You Lose!\n\n";
	}
	else if (computerChoice == 7 && userChoice == 1) 
	{
		cout << "Dog soils Rock. You Lose!\n\n";
	}
	if (computerChoice == 6 && userChoice == 4) 
	{
		cout << "Gun shoots Lizard. You Lose!\n\n";
	}
	else if (computerChoice == 8 && userChoice == 2) 
	{
		cout << "Trump litters Paper. You Lose!\n\n";
	}
	if (computerChoice == 8 && userChoice == 3) 
	{
		cout << "Trump abuse Scissors. You Lose!\n\n";
	}
	else if (computerChoice == 7 && userChoice == 8) 
	{
		cout << "Dog chases Trump. You Lose!\n\n";
	}
	if (computerChoice == 4 && userChoice == 7) 
	{
		cout << "Lizard hypnotizes Dog. You Lose!\n\n";
	}

}//end determindWinner




 /*
 Proof




 ROCK PAPER SCISSORS!!!
 ---------
 1) Rock
 2) Paper
 3) Scissors
 4) Quit

 Enter your choice:1
 You selected: Rock
 The computerChoiceuter selected: Paper
 Paper wraps rock, computerChoiceUTER WINS



 ROCK PAPER SCISSORS!!!
 ---------
 1) Rock
 2) Paper
 3) Scissors
 4) Quit

 Enter your choice:2
 You selected: Paper
 The computerChoiceuter selected: Paper
 Tie. NO WINNER.




 ROCK PAPER SCISSORS!!!
 ---------
 1) Rock
 2) Paper
 3) Scissors
 4) Quit

 Enter your choice:3
 You selected: Scissors
 The computerChoiceuter selected: Paper
 Rock smashes scissors. YOU WON!



 ROCK PAPER SCISSORS!!!
 ---------
 1) Rock
 2) Paper
 3) Scissors
 4) Quit

 Enter your choice:4
 Press any key to continue . . .
 */