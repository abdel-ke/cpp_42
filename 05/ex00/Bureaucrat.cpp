#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	// std::cout << "constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	// std::cout << "Parametrized constructor called" << std::endl;
	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Bureaucrat	&Bureaucrat::operator = (const Bureaucrat &obj)
{
	// std::cout << "Assignment operator = called" << std::endl;
	if (this != &obj)
	{
		(std::string)this->_name = (std::string)obj._name;
		this->_grade = obj._grade;
	}
	return *this;
}

void	Bureaucrat::incGrade()
{
	if (this->_grade == 1)
		throw GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decGrade()
{
	if (this->_grade == 150)
		throw GradeTooLowException();
	this->_grade++;
}

std::string	Bureaucrat::getName() const
{
	return this->_name;
}

int		Bureaucrat::getGrade() const
{
	return this->_grade;
}

std::ostream	&operator << (std::ostream &flux, const Bureaucrat & obj)
{
	// std::cout << "Assignment operator << called" << std::endl;
	flux << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return flux;
}

const	char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade to High";
}

const	char	*Bureaucrat::GradeTooLowException::what() const throw ()
{
	return "Grade to Low";
}
