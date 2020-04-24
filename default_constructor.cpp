// Section 13 - The Default Constructor 
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
	std::string get_name() {
		return name;
	}
	// overloaded constructors 
	Player() {					
		// default 
		name = "New Player";
		health = 100;
		xp = 0;
	}
	Player(std::string name_val, int health_val, int xp_val) {
		// three arg constructor 
		name = name_val;
		health = health_val;
		xp = xp_val;
	}
	~Player() {
		// destructor 
		std::cout << name << " has died." << std::endl;
	}
};

int main() {
	{
		Player player1;
		player1.set_name("Devere");
		std::cout << "Player 1: " << player1.get_name() << std::endl;

		Player player2("Tuitty", 500, 0);
		std::cout << "Player 2: " << player2.get_name() << std::endl;
	}

	std::cout << "\nGAME OVER!" << std::endl;

	return 0;
}