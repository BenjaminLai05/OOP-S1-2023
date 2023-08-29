#include <iostream>
#include <string>
class Player {
   private:
   std::string name;
   int health;
   int damage;
   

   public: 
   Player(std::string name, int health, int damage); // Constructor that sets the data members to the given values
   void attack(Player* opponent, int damage); // Deals damage to the opponent based on the player's damage points
   void takeDamage(int damage); // Reduces the player's health by the given amount
   int getHealth(); 
   void setHealth(int newhealth);
   std::string getName(); 
   void setName(std::string& newName);
};

class Wizard: public Player {
   private:
   int mana;
   public:
   void castSpell(Player* opponent);
};

class Warrior: public Player {
   private:
   std::string weapon;
   public:
   void swingWeapon(Player* opponent);

};

std::string Player::getName() {
   return name;
}

void Player::setName(std::string& newName) {
   name = newName;
}

int Player::getHealth() {
   return health;
}

void Player::setHealth(int newHealth) {
   health = newHealth;
}