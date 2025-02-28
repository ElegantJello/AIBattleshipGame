# BattleshipGameAI

## Project Overview

This game was written for a Java programming assignment. The project was developed between November 2021 and December 2021. It is written in Java, using OOP principles.

## Description

This game is a computer-based adaptation of Battleship. Players have the opportunity to compete against an AI opponent. The AI strategically places battleships before the start of the game and anticipates the player's ship placement during gameplay. The system records hits and misses, calculates remaining ships, and prints the results of the game upon completion.

## Classes

1. **Grid.java:** Represents the main grid used for the game.
2. **ComputerGrid.java:** Manages the grid for the computer's ships. It inheritants the attributes of Grid class.
3. **Ship.java:** Defines the `Ship` class, storing information about ship types (Carrier, Battleship, Cruiser, Submarine, Destroyer).
4. **BattleshipMain.java:** Main class for initiating and running the Battleship game.
5. **Display.java:** Handles the display and user interface aspects of the game.

## Gameplay

- The AI strategically places battleships before the game starts.
- The AI anticipates the player's ship placement and records hits and misses.
- The game calculates remaining ships and displays results upon completion.

## How to Run

To run the `BattleshipGameAI`, execute the `BattleshipMain.java` file.

## Note

The player must record their own grid, the file stored of the opponent's grid only shows the hits and misses AI did.