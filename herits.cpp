#include <iostream>

class	 parent
{
	private :
		std::string	_name;
	public :
		parent();
		parent(std::string);
		void	setnameP(std::string);
		~parent();
		void	print();
};

class child: private parent
{
	public :
		child();
		~child();
};

parent::parent(std::string name) : _name(name)
{
	std::cout << "Parent paramitrised constructor called!!\n";
}

parent::parent()
{
	std::cout << "Parent default constructor called!!\n";
}

parent::~parent()
{
	std::cout << "Parent destructor called!!\n";
}

void parent::print()
{
	std::cout << "Name " << _name << std::endl;
}

child::child()
{
	this->setnameP("hello");
	this->print();
	std::cout << "Child default constructor called!!\n";
}

child::~child()
{
	std::cout << "Child destructor called!!\n";
}

void	parent::setnameP(std::string name)
{
	this->_name = name;
}

int main()
{
	child c;
	c.print();
}
