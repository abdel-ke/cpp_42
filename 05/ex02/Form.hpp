#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
private:
	const std::string _name;
	bool _signed;
	const int _gradeSign;
	const int _gradeExecute;
	std::string _target;

public:
	class GradeTooHighException : public std::exception
	{
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		const char *what() const throw();
	};
	Form();
	Form(std::string, int, int);
	Form(const Form &);
	~Form();
	Form &operator=(const Form &);
	std::string getName() const;
	int getGradeSign() const;
	int getGradeException() const;
	bool getSigned() const;
	void beSigned(Bureaucrat &);
	void setTarget(std::string);
	std::string	getTarget();
};

std::ostream &operator<<(std::ostream &flux, const Form &obj);

#endif
