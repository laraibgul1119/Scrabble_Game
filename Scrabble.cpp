//#include<iostream>
//#include"String.h"
//#include "Scrabble.h"
//using namespace std;
//int Scrabble::Points[26] = { 1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10 };
//int Scrabble::computeScore(String& s)
//{
//	int score = 0;
//	for (int i = 0; i < s.getLength(); i++)
//	{
//		if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z')
//		{
//			if (s[i] >= 'A' && s[i] <= 'Z')
//			{
//				score += Points[s[i] - 'A'];
//			}
//			else
//			{
//				score += Points[s[i] - 'a'];
//			}
//		}
//
//	}
//	return score;
//}
//
//void Scrabble::startGame()
//{
//	char choice;
//	cout << "*********** Welcome to My Scrabble world **********\n";
//	do
//	{
//		String player1Input, player2Input;
//		cout << "Player 1: ";
//		player1Input.input();
//		cout << "Player 2: ";
//		player2Input.input();
//		int player1Score = computeScore(player1Input), player2Score = computeScore(player2Input);
//		if (player1Score == player2Score)
//		{
//			cout << "Tie!\n";
//		}
//		else if (player1Score > player2Score)
//		{
//			cout << "Player 1 Win!\n";
//		}
//		else
//		{
//			cout << "Player 2 Win\n";
//		}
//		cout << "Do you want to play another game (Y/N)? ";
//		cin >> choice;
//		cin.ignore();
//	} while (choice == 'Y' || choice == 'y');
//}
