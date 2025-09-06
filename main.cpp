#include <iostream>

class A
{
	public:
	A() {}
	~A() {}
	void foo() {}
};

class B : public A
{
public:
	B() {}
	~B() {}
	void bar() {}
};

class C : public A
{
	public:
	C() {}
	~C() {}
	void baz() {}
};

class D
{
	public:
	D() {}
	~D() {}
	void qux() {}
};

int main()
{
	std::cout << "Hello, World!" << std::endl;
	return 0;
}