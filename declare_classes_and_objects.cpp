// Declare Classes and Objects
#include <iostream>
#include <vector>
#include <string>			// remember standard strings are initialized to empty string

/*Create a class*/
class Player {
	// attributes 
	std::string name{ "New Player" };
	int health{ 100 };
	int xp{ 0 };

	// methods (functions) 
	void talk(std::string);
	bool is_dead();
};

class Accout {
	// attributes
	std::string name{ "Account" };
	double balance{ 0 };

	// methods 
	bool deposit(double);		// return True or False depending on whether the account action was successful 
	bool withdraw(double);
};

int main() {
	// Instantiate 2 objects using Player class
	Player devere;
	Player stella;

	//Player players[]{ devere, stella };

	std::vector<Player> player_vec{ devere, stella };

	// Create objects on the heap. Pointer to Player object on the heap
	Player* tuitty = new Player;			// type of pointer, name of pointer = newly allocated memory in the heap 

	Accout devere_account;

	return 0;
}