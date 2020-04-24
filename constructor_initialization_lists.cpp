/*Section 13 - Constructor Initialization Lists*/
#include <iostream>
#include <string>

class Player {
	std::string name;
	int health;
	int xp;
public:
	// overloaded constructors 
	Player();
	Player(std::string name_val);
	Player(std::string name_val, int health_val, int xp_val);
};

// using constructor initialization lists is more efficient
// than creating an object then assigning its value 
Player::Player() 
	:name{ "None" }, health{ 0 }, xp{ 0 } {			// constructor initialization list, order doesn't matter
}													// order is order declared in the class

Player::Player(std::string name_val) 
	: name{ name_val }, health{ 0 }, xp{ 0 } {
}

Player::Player(std::string name_val, int health_val, int xp_val) 
	: name{ name_val }, health{ health_val }, xp{ xp_val } {
}

int main() {

	Player empty;
	Player devere{ "Devere" };
	Player tuitty{ "Tuitty", 100, 339399 };

	return 0;
};