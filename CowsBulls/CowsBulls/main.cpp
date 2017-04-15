#include <iostream>
#include <string>

using namespace std;

void IntroduceGame();
void PlayGame();
bool AskToPlayAgain();
void PrintToScreen(string message);
string GetAndReturnInput();

// Sample function
int doubleMe(int x) {
	return x * 2;
}
int main() {

	IntroduceGame();

	do {
		PrintToScreen("Playing the game!");
		PlayGame();
	} while (AskToPlayAgain());

	return 0;
}

// Introduce player to the game
void IntroduceGame() {
	PrintToScreen("Can you guess the 9-letter word?");
	PrintToScreen("Enter you guess: ");
}

void PlayGame() {
	constexpr int MAX_TRIES = 5;

	for (int i = 1; i <= MAX_TRIES; i++)
		cout << "Your guess was " << GetAndReturnInput() << endl;
}

bool AskToPlayAgain()
{
	PrintToScreen("Maximum tries reached! Do you want to play again?");
	string response = "";
	getline(cin, response);

	return (response[0] == 'y' || response[0] == 'Y');
}

// Print something on the screen
void PrintToScreen(string message) {
	cout << message << endl;
}

// Return player input
string GetAndReturnInput() {
	PrintToScreen("Enter your guess: ");
	string guess = "";
	getline(cin, guess);
	return guess;
}