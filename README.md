# Canfield
 simplified C++ console version of the game Canfield

This repository contains implementation and header files to run a simplified version of canfield
in a terminal. The List*.cc and List*.h files contain the code for a linked list and operators 
for the linked list. Queue.cc and Queue.h are files to create a queue using the function and form
of the linked list. Stack.cc and Stack.h are files to create a stack using the function and form
of the linked list. 

To compile this program all files should be in the same directory, compiled using the make file,
and run using the command canfield. 

You move cards in numerical order, descending order on a tableau and ascending order on a foundation 
until all cards have been moved to a foundation.
The top card from the reserve is always available for play on a foundation or a pile in the tableau.
The top card of each tableau pile is always available to be played onto a foundation.
Cards from the draw pile are turned face up one at a time as you decide to do so, forming a discard 
pile. The top card of the discard pile is always available for play.
To move cards from one tableau pile to another, you may only move the entire pile. When a space is 
available in the tableau, the top card from the reserve immediately fills that space.
When the draw pile is exhausted, the discard pile is "turned face down", without shuffling. 
This becomes a new draw pile. You may do this as many times as you wish until you win or until 
the game reaches a standstill.

Winning Canfield Solitaire:
You win by building up all four foundations to 13 cards.
