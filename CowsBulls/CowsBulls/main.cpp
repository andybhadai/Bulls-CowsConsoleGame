#include <iostream>
#include <string>

using namespace std;

// Sample function
int doubleMe(int x) {
	return x * 2;
}

// Introduce the game
void printToScreen(string message) {
	cout << message << endl;
}

// Return player input
string getAndReturnInput() {
	string guess = "";
	getline(cin, guess);
	return guess;
}

int main() {

	// Define constants
	//constexpr int WORD_COUNT = 9;

	printToScreen("Can you guess the 9-letter word?");
	printToScreen("Enter you guess: ");
		
	cout << "Your guess was: " << getAndReturnInput() << endl;

	return 0;
}