#include <iostream>
using namespace std;

class Human
{
public:
  int height;
  int weight;
  int age;

  int getAge(int age)
  {
    return age;
  }

  void setWeight(int w)
  {
    this->weight = w;
  }
};

class Male : public Human
{
public:
  string color;

  void sleep()
  {
    cout << "Male sleeping" << endl;
  }
};

int main()
{
  Male object1;
  object1.getAge(10);
  cout << object1.age << endl;
  // cout << object1.weight << endl;
  // cout << object1.height << endl;
  // cout << object1.color << endl;
  object1.sleep();
  return 0;
}