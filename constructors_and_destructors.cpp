// Section 13 - Constructors and Destructors 
#include <iostream>
#include <string>

class Player {
private:
	std::string name;
	int health;
	int xp;
public:
	void set_name(std::string name_val) {
		name = name_val;
	}
	// Overloaded Constructors, no actual initialization 
	Player() {
		std::cout << "No args constructor called" << std::endl;
	}
	Player(std::string name) {
		std::cout << "String arg constructor called." << std::endl;
	}
	Player(std::string name, int health, int xp) {
		std::cout << "Three args constructor called" << std::endl;
	}
	~Player() {
		std::cout << "Destructor called for " << name << std::endl;
	}
};

int main() {
	// blocks allow object to go  out of scope to show destructor in action
	{
		Player slayer;
		slayer.set_name("Slayer");
	}
	
	{
		Player devere;
		devere.set_name("Devere");
		Player tuitty("Tuitty");
		tuitty.set_name("Tuitty");
		Player stella("Stella", 100, 999);
		stella.set_name("Stella");
	}

	{
		Player* enemy = new Player;
		enemy->set_name("N.M. Migo");		// arrow function (member function)

		Player* level_boss = new Player("Level Boss", 1000, 300);
		level_boss->set_name("Level Boss");

		// use delete to call for constructors 
		delete enemy;
		delete level_boss;
	}

	return 0;
}