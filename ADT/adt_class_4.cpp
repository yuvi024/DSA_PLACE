#include <iostream>

using namespace std;

class Animal
{
protected:
  string m_name;

public:
  Animal(string name) : m_name(name)
  {
  }

  // the interface that has to be implemented
  // is derived class

  virtual string MakeSound() = 0;

  string GetName()
  {
    return m_name;
  }
};

class Dog : public Animal
{
public:
  // forward the constructor arguments
  Dog(string name) : Animal(name) {}

  // copy assignment operator overloading
  void operator = (const Dog &D)
  {
    m_name = D.m_name;
  }

  // here we implement the interface
  string MakeSound() override
  {
    return "woof-woof!";
  }
};

int main()
{
  Dog dog = Dog("Bulldog");
  
  cout << dog.GetName() << " is barking: ";
  cout << dog.MakeSound() << endl;

  Dog dog2 = dog;

  cout << dog2.GetName() << " is barking again: ";
  cout << dog2.MakeSound() << endl;

  return 0;
}