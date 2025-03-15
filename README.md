## Project Overview

The project was developed between November 2021 and December 2021.

## Description

AI Battleship is a digital adaptation of the classic Battleship game, where players compete against an AI opponent. The AI strategically places its ships before the game begins and predicts the player's ship placement during gameplay. The system tracks hits and misses, calculates remaining ships, and displays the final game results.

## Classes

The game is structured using several key classes:

- Grid.java – Represents the primary grid used in the game.

- ComputerGrid.java – Manages the AI’s grid, inheriting attributes from the Grid class.

- Ship.java – Defines the Ship class, which includes ship types such as Carrier, Battleship, Cruiser, Submarine, and Destroyer.

- BattleshipMain.java – Serves as the main entry point to initialize and run the game.

- Display.java – Handles the user interface and visual representation of the game.

## Gameplay

- The AI places its ships strategically before the game begins.

- During gameplay, the AI predicts the player’s ship placement and records hits and misses.

- The system calculates the number of remaining ships and displays the final results upon game completion.

## How to Run

To start the AI Battleship game, execute the BattleshipMain.java file.

## Note

Players must manually track their own grid, as the stored file for the AI's grid only records the hits and misses made by the AI.
