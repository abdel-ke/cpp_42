#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string);
	PresidentialPardonForm(PresidentialPardonForm const &);
	~PresidentialPardonForm();
	PresidentialPardonForm	&operator=(PresidentialPardonForm const &);
	void	Action() const;
	class FileNotOpenExeception : public std::exception
	{
		virtual const char *what() const throw();
	};
};

#endif
