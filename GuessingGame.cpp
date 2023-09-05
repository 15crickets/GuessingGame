/*
Author: Vikram Vasudevan
Date: 9/5/2023
Description: This program allows a user to input a number between 0 and 100. The computer will generate a random number and inform the user if their guess was correct, too low, or too high. Once the user correctly guesses the number, the computer will output the number of guesses, and then ask the user whether they'd like to play again. 

3 Rules
   1. No global variables
   2. No strings
   3. You should include <iostream>, not stdio. Use "new" and "delete" instead of "malloc" and "free".

 */

#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
  //initializing variables
  bool    playing = true;
  int numTurns = 0;
  int randValue = 0;
  //loop runs unless playing == false, which happens when user selects 'n'.
  while(playing == true){
    //generating random  number
    if(numTurns == 0){
      srand(time(NULL));
      randValue = rand()%100 +1;

    }
    //prompting user and storing input.
    cout << "Guess a number " << endl;
      int input = 0;
      cin >> input;
      //determining if guess is >, < or = to randValue
      if(input > randValue){
	cout << "Your guess was too high." << endl;
	numTurns++;
      }
      else if(input < randValue){
	cout << "Your guess was too low. " << endl;
	numTurns ++;

      }
      else{
	cout << "You guessed the number! It took you ";
	cout << numTurns + 1;
	cout << " guesses" << endl;
	cout << "Would you like to play again? Type y if yes or n if no " << endl;
	char stillPlaying = ' ';
	cin >> stillPlaying;
	//determine if user wants to play again
	if(stillPlaying == 'n'){
	  playing = false;
	}
	else if (stillPlaying == 'y'){
	  numTurns = 0;
	}
      }
  }








  return 0;
}
