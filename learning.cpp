#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdio>

int main() {

	int rock = 1;
	int paper = 2;
	int scissors = 3;
	int playerscore = 0;
	int computerscore = 0;
	
	int totalrounds = 5;
	int choice;

	for (int round = 1; round <= totalrounds; round++) {
		std::cout << "\nRound " << round << ":\n"; // Display current round number
		std::cout << "Which one would you like to choose? (You have to type in the number) \n";
		std::cout << "1.Rock\n";
		std::cout << "2.Paper\n";
		std::cout << "3.Scissors\n\n";
		std::cout << "Your choice is: ";

		std::cin >> choice;





		srand(static_cast<unsigned>(time(0)));
		int computerchoice = rand() % 3 + 1;



		if (choice == 1) {
			std::cout << "\nYou picked Rock \n";
		}
		else if (choice == 2) {
			std::cout << "\nYou picked Paper \n";
		}
		else if (choice == 3) {
			std::cout << "\nYou picked Scissors \n";
		}


		std::cout << "\nComputer choice: ";


		if (computerchoice == 1) {
			std::cout << "Rock \n ";
		}
		else if (computerchoice == 2) {
			std::cout << "Paper \n ";
		}
		else if (computerchoice == 3) {
			std::cout << "Scissors \n ";
		}
		// comparing for final results
		if (choice == 1 &&  computerchoice == 3) { // idk how || made the errors go away but i'll take it, its working as intended now
			std::cout << "\nYou win!\n";
			playerscore++;
		}
		else if (choice == 2 && computerchoice == 1) {
			std::cout << "\nYou win!\n";
			playerscore++;


		}
		else if (choice == 3 && computerchoice == 2) {
			std::cout << "\nYou win!\n";
			playerscore++;

		}
		else if (choice == 1 && computerchoice == 1) {
			std::cout << "\nIt's a draw!\n";
			playerscore++;
			computerscore++;
		}
		else if (choice == 2 && computerchoice == 2) {
			std::cout << "\nIt's a draw!\n";
			playerscore++;
			computerscore++;
		}
		else if (choice == 3 && computerchoice == 3) {
			std::cout << "\nIt's a draw!\n";
			playerscore++;
			computerscore++;
		}
		else {
			std::cout << "\n Computer wins D: \n";
			computerscore++; }
		
	}
	std::cout << "\nThanks for playing the scores are: You = " << playerscore << ", computer score is: computer = " << computerscore;

}
