/* Using access modifiers */
#include <iostream>
#include <string> 

class Player {
private:		// only accessible by the object 
	// attributes 
	std::string name{ "new player" };
	int health;
	int xp;
public:			// accessible anywhere 
	// methods 
	void talk(std::string text_to_say) {
		std::cout << name << ": " << text_to_say << std::endl;
	}
	bool is_dead();
};

int main() {
	Player hero;
	//hero.name = "Devere";			// compile error, attempting to access a private object from outside the class
	hero.talk("hello");				// public method is accessible 


	return 0;
}