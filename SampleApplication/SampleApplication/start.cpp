#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
void IntroduceGame(int word_length);
string GetGuess();

int main()
{
	IntroduceGame(5);
	GetGuess();

	return 0;
}

void IntroduceGame(int word_length)
{
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to the game! Can you guess the " << word_length << " letter word?";
	return;
}

string GetGuess()
{
	// Get input value from player
	cout << "Enter your word: ";
	string Guess = "";
	getline(cin, Guess);
	cout << "Your word was " << Guess << "\n";
	return Guess;
}

