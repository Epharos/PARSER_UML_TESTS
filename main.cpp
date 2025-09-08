#include <iostream>

class Location; // Forward declaration

class LivingBeing
{
	protected:
		Location* location; // Pointer to Location
	public:
		virtual void speak() = 0; // Pure virtual function
		virtual ~LivingBeing() {}  // Virtual destructor
};

class Dog : public LivingBeing
{
	public:
		void speak() override
		{
			std::cout << "Woof!" << std::endl;
		}
};

class Cat : public LivingBeing
{
	public:
		void speak() override
		{
			std::cout << "Meow!" << std::endl;
		}
};

class Location
{
	public:
		virtual void describe() = 0; // Pure virtual function
		virtual ~Location() {}        // Virtual destructor
};

class Forest : public Location
{
	public:
		void describe() override
		{
			std::cout << "A dense forest with towering trees." << std::endl;
		}
};

class Desert : public Location
{
	public:
		void describe() override
		{
			std::cout << "A vast desert with rolling dunes." << std::endl;
		}
};

class House : public Location
{
	public:
		void describe() override
		{
			std::cout << "A cozy house with a warm fireplace." << std::endl;
		}
};

int main()
{
	std::cout << "Hello, World!" << std::endl;
	return 0;
}