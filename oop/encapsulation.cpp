#include <iostream>
using namespace std;

class Student
{

private:
  string name;
  int age;
  int height;

public:
  int getAge(int age)
  {
    return age;
  }
};

int main()
{
  Student first;
  cout << first.getAge(10) << endl;

  return 0;
}