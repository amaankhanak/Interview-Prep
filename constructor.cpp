#include <iostream>
using namespace std;

// class
class Hero
{
  // properties
  // char name[100];
private:
  int health;

public:
  char level;

  Hero()
  {
    cout << "Constructor called" << endl;
  }

  int getHealth()
  {
    return health;
  }

  char getLevel()
  {
    return level;
  }

  void setHealth(int h)
  {
    health = h;
  }

  void setLevel(char ch)
  {
    level = ch;
  }
};

int main()
{

  Hero ramesh;

  // creation of object
  // Hero ramesh;

  // cout << "Ramesh health is: " << ramesh.getHealth() << endl;

  // ramesh.setHealth(70);

  // cout << "health is: " << ramesh.getHealth() << endl;
  // ramesh.level = 'A';

  // cout << "level is: " << ramesh.level << endl;

  return 0;
}