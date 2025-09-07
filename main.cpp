#include <iostream>

class A
{
public:
	int x;

	void foo() {}

private:
	std::string secret;

	void hidden() {}

protected:
	D* objects;

	void protectedMethod() {}
};

class B : public A
{
public:
	void bar() {}
};

class C : public A
{
public:
	void baz() {}
};

class D
{
public:
	void qux() {}
};

int main()
{
	std::cout << "Hello, World!" << std::endl;
	return 0;
}