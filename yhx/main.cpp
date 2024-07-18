#include <iostream>	// for cin and cout streams
#include <cstdlib>	// for the rand and srand functions
#include <ctime>	// for the time function

//=======================================================================================

// Constant Declarations
// ---------------------

const int lotteryDigits = 3;
const int SIZE = 5;

//=======================================================================================

// Function Prototypes
// -------------------

void generateLottery(int[], int, int);
void userInput(int[], int);
int matchCounter(int[], int[], int);
void displayNumbers(int[], int[]);
void winnerOrLoser(int);

//=======================================================================================

// -------------
// Main Function
// -------------

//=======================================================================================

using namespace std;

int main()
{
	// Variable Declarations
	int lottery[5] = {0, 0, 0, 0, 0};
	int user[5] = {0, 0, 0, 0, 0};
	int matches = 0;

	//Function Calls
	generateLottery(lottery, SIZE, lotteryDigits);

	userInput(user, SIZE);

	matchCounter(lottery, user, matches);

	displayNumbers(lottery, user);

	winnerOrLoser(matches);

	system("pause");
	return 0;
} //end main

//=======================================================================================

// --------------------
// Function Definitions
// --------------------

//=======================================================================================

// Randomly generates winning lottery numbers

void generateLottery(int lottery[], int, int)
{
	unsigned seed = time(0);
	srand(seed);

	for (int count=0; count<SIZE; count++)
	{
		lottery[count] = 1 + rand() % lotteryDigits;
	}
} // end generateLottery

//=======================================================================================

// Reads user lottery number choices

void userInput(int user[], int)
{
	cout << "This program will simulate a lottery.\n\n";

	for (int count1=0; count1<SIZE; count1++)
	{
		cout << "Enter a digit between 0 and 9:---> ";
		cin >> user[count1];

		while (user[count1]<0 || user[count1]>9)
		{
			cout << "Error! Entry must be between 0 and 9:---> ";
			cin >> user[count1];
		}
	}
} // end userInput

//=======================================================================================

// Counts the number of matches

int matchCounter(int[], int[], int)
{
	int check = 1;
	int match = 0;
	int lotto[5];
	int input[5];

	while (check <= SIZE)
	{
		if (lotto[check] != input[check])
			check++;
		else
			match = match + 1;
	}

	return match;
} // end matchCounter

//=======================================================================================

// Diplays the winning numbers and the user's numbers

void displayNumbers(int lottery[], int user[])
{
	cout << "The winning lottery numbers are: " << lottery[0] << " " << lottery[1] << " " << lottery[2] << " " << lottery[3] << " " << lottery[4] << endl;
	cout << "Your lottery numbers are: " << user[0] << " " << user[1] << " " << user[2] << " " << user[3] << " " << user[4] << endl;
} // end displayNumbers

//=======================================================================================

//Displays the number of matches and whether or not the user has won

void winnerOrLoser(int matches)
{
	cout << "You matched " << matches << " numbers";

	if (matches = SIZE)
		cout << "Congratulations--you WIN!!!!";
	else
		cout << "Sorry--you lose. Better luck next time.";
} // end winnerOrLoser

//=======================================================================================

