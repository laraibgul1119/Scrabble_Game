# Scrabble Game 🎲

This repository contains a simplified implementation of the classic word game Scrabble. The program allows two players to input words, calculates their respective scores based on standard Scrabble letter values, and determines the winner of each round.

## Functionality ✨

- **Two-Player Gameplay**: Supports a basic two-player mode where each player enters a word.
- **Score Calculation**: Computes the score for each word based on the standard Scrabble letter point system.
- **Winner Determination**: Compares the scores of both players and declares the winner for the round or a tie.
- **Play Again Option**: Allows players to easily start another game after a round concludes.

## How it Works ⚙️

The core logic resides in the `Scrabble.cpp` and `Scrabble.h` files. The `Scrabble` class contains a static array `Points` that stores the point values for each letter of the alphabet. The `computeScore` function iterates through the input word, summing up the points for each letter. The `startGame` function handles the game flow, taking input from two players, calculating their scores, and displaying the result.

## Learn More About Scrabble 📚

For more detailed information about the official Scrabble game, its rules, history, and variations, you can visit the Wikipedia page:

[Scrabble on Wikipedia](https://en.wikipedia.org/wiki/Scrabble)


