#ifndef FORM_HPP
# define FORM_HPP
#include <iostream>
#include <exception>
#include <fstream>
#include "Bureaucrat.hpp"



class Form
{
private:
	const std::string	_name;
	bool				_checker;
	int const			_gradeSign;
	int const			_gradeExecute;
public:
	class GradeTooHighException:public std::exception {
		virtual const char * what() const throw();
	};
	class GradeTooLowException:public std::exception {
		virtual const char * what() const throw();
	};
	Form();
	Form(std::string name, bool checker, int gradeSign, int gradeExecute);
	~Form();
	Form(const Form &rhs);
	Form &operator=(const Form &rhs);
	void	beSigned(const Bureaucrat &a);
};

std::ostream &operator<<(std::ostream &out, const Form &rhs);
#endif