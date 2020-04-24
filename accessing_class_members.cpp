/*Section 13 - Accessing Class Members*/
#include <iostream>
#include <string>

/* Class definitions */
class Player {
public:					// access modifier that makes all members accessible 
	// attributes 
	std::string name; 
	int health;
	int xp;

	// methods 
	void talk(std::string text_to_say) {
		/*Player dialog to screen*/
		std::cout << name << ": " << text_to_say << std::endl;
	}
	bool is_dead();	
};

class Account {
public:
	// attributes
	std::string name;
	double balance;

	// methods 
	void show_balance() {
		std::cout << "Current balance: $" << balance << std::endl;
	}

	bool deposit(double bal) {
		balance += bal;
		std::cout << "Deposit: $" << bal << std::endl;
		return 1;
	}
	bool withdraw(double bal) {
		balance -= bal;
		std::cout << "In withdraw" << std::endl;
		return 1;
	}
};

int main() {
	//Player devere;
	//devere.name = "Devere";				// access members using the dot operator 
	//devere.health = 100;
	//devere.xp = 99;
	//devere.talk("Hello Tuitty!");

	//Player tuitty;
	//tuitty.name = "Tuitty";
	//tuitty.health = 100;
	//tuitty.xp = 4;
	//tuitty.talk("Hello Devere!");

	//Player* stella = new Player;		// pointer to Player object on the heap 
	//(*stella).name = "Stella";			// dereference pointer and set name attribute 
	//stella->talk("Booooooooowwww!!!");	// use arrow operator to access a class member

	//delete stella;

	Account devere_account;
	devere_account.name = "Devere's Checking";
	devere_account.balance = 10000.0;
	devere_account.show_balance();
	devere_account.deposit(1);
	devere_account.show_balance();
	
	Account* tuitty_account = new Account;
	(*tuitty_account).name = "Tuitty's Checking";
	tuitty_account->balance = 0;
	tuitty_account->show_balance();
	tuitty_account->withdraw(10000);
	tuitty_account->show_balance();

	delete tuitty_account;	

	return 0;
}