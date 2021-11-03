#include "ShrubberyCreationForm.hpp"

// ShrubberyCreationForm::ShrubberyCreationForm(): _name("Shrubbery Creation"), _gradeSign(145) ,_gradeExecute(137)
ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery Creation", 145, 137)
{
	// // std::cout << "Shrubbry constructor" << std::endl;
	// std::ofstream	file(_name + "_shrubbery");
	// file	<< "         v"				<< std::endl
	// 		<< "        >X<"			<< std::endl
	// 		<< "         A"				<< std::endl
	// 		<< "        d$b"			<< std::endl
	// 		<< "      .d\$$b."			<< std::endl
	// 		<< "    .d$i$$\$$b."		<< std::endl
	// 		<< "       d$$@b"			<< std::endl
	// 		<< "      d\$$$ib"			<< std::endl
	// 		<< "    .d$$$\$$$b"			<< std::endl
	// 		<< "  .d$$@$$$$\$$ib."		<< std::endl
	// 		<< "      d$$i$$b"			<< std::endl
	// 		<< "     d\$$$$@$b"			<< std::endl
	// 		<< "  .d$@$$\$$$$$@b."		<< std::endl
	// 		<< ".d$$$$i$$$\$$$$$$b."	<< std::endl
	// 		<< "        ###" 			<< std::endl
	// 		<< "        ###" 			<< std::endl
	// 		<< "        ###" 			<< std::endl;
	// file.close();
}

// ShrubberyCreationForm::ShrubberyCreationForm(std::string target): _name("Shrubbery Creation"), _gradeSign(145) ,_gradeExecute(137)
ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("Shrubbery Creation", 145, 137)
{
	this->setTarget(target);
}

// ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj): _name(obj._name), _gradeSign(obj._gradeSign), _gradeExecute(obj._gradeExecute)
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj): Form(obj.getName(), 145, 137)
{
	// std::cout << "Shrubbry copy constructor" << std::endl;
	*this = obj;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	// std::cout << "Shrubbry destructor" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm	const &obj)
{
	// std::cout << "Shrubbry assignment operator called" << std::endl;
	// if (this != &obj)
		// this->_name = obj._name;
	return *this;
}
